#ifndef SOPMCLIENT_H
#define SOPMCLIENT_H

#include <string>

class SoPMClient
{
    public:

        SoPMClient();

        ~SoPMClient();

        void connectToServer(std::string address, int port);

        void closeConnection();

        bool hasConnection();

        std::string request(std::string request);

    protected:

    private:
        bool isConnected_;
        int sockfd_;

};

#endif // CLIENT_H
