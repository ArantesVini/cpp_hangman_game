#pragma once

#include <string>
#include "Holder.hpp"

class Account
{
private:
    std::string number;
    Holder holder;
    float balance;
    static int accountsQuantity;
public:
    Account(std::string number, Holder holder);
    ~Account();
    std::string getNumber() const;
    float getBalance() const;
    void withdraw(float withdrawValue);
    void deposit(float depositValue);
    static int getAccountsQuantity();
};
