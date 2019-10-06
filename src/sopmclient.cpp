#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>

#include "sopmclient.h"

#define BUFFER_SIZE 256

SoPMClient::SoPMClient() : isConnected_(false), sockfd_(socket(AF_INET, SOCK_STREAM, 0))
{

}

SoPMClient::~SoPMClient()
{
    closeConnection();
}

void SoPMClient::connectToServer(std::string address, int port)
{
    struct sockaddr_in socketAddress;
    int result;

    socketAddress.sin_family = AF_INET;
    socketAddress.sin_addr.s_addr = inet_addr(address.c_str());
    socketAddress.sin_port = htons(port);

    result = connect(sockfd_, (struct sockaddr *)&socketAddress, sizeof(socketAddress));
    if (result == -1) {
        throw "Failed connection to the server";
    }
    isConnected_ = true;
}

void SoPMClient::closeConnection()
{
    if (!isConnected_) {
        return;
    }
    close(sockfd_);
    isConnected_ = false;
}

bool SoPMClient::hasConnection()
{
    return isConnected_;
}

std::string SoPMClient::request(std::string request)
{
    if (isConnected_ == false) {
        throw "No connection";
    }

    char buffer[BUFFER_SIZE];
    int result;

    snprintf(buffer, BUFFER_SIZE, "%s", request.c_str());
    if (result < 0) {
        throw "Failed sending request to th server";
    }

    result = recv(sockfd_, buffer, BUFFER_SIZE, 0);
    if (result <= 0) {
        throw "Failed receiveing answer from the server";
    }

    return buffer;
}
