#ifndef REQUESTFORMER_H
#define REQUESTFORMER_H

#include <string>

#include "sopmclient.h"

class RequestFormer {
    public:
        RequestFormer();
        ~RequestFormer();

        static void setConnection();

        static void disconnect();

        static void registrate(std::string login, std::string password);

        static void login(std::string login, std::string password);

    protected:

    private:
        std::string login_;
        std::string password_;
        static SoPMClient client_;

        void setNewUser(std::string& login, std::string& password);

        void setExistingUser(std::string& login, std::string& password);
};

#endif // REQUESTFORMER_H
