#include "requestformer.h"
#include "sopmclient.h"
#include "json.hpp"

using json = nlohmann::json;

const std::string ADDRESS = "196.124.4.0";
const int PORT = 1034;

SoPMClient RequestFormer::client_;

RequestFormer::RequestFormer()
{

}

RequestFormer::~RequestFormer()
{

}

void RequestFormer::setConnection()
{
    client_.connectToServer(ADDRESS, PORT);
}

void RequestFormer::disconnect()
{
    client_.closeConnection();
}

void RequestFormer::setNewUser(std::string& login, std::string& password)
{
    login_ = login;
    password_ = password;
}

void RequestFormer::setExistingUser(std::string& login, std::string& password)
{
    login_ = login;
    password_ = password;
}

void RequestFormer::registrate(std::string login, std::string password)
{
    RequestFormer rf;
    rf.setNewUser(login, password);

    json req;
    req["type"] = "ok";
    req["info"]["login"] = login;
    req["info"]["password"] = password;
    std::string str = req.dump();

    std::string answer = client_.request(str);
    json ans = json::parse(answer);
    if (ans["type"] != "ok")
        throw "Failed sending data to the server! Try again!";
}

void RequestFormer::login(std::string login, std::string password)
{
    RequestFormer rf;
    rf.setExistingUser(login, password);

    json req;
    req["type"] = "ok";
    req["info"]["login"] = login;
    req["info"]["password"] = password;
    std::string str = req.dump();

    std::string answer = client_.request(str);
    json ans = json::parse(answer);
    if (ans["type"] != "ok")
        throw "Failed sending data to the server! Try again!";
}
