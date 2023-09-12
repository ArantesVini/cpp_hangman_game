#pragma once

#include <string>

class Account
{
private:
    std::string number;
    std::string holderDocumentNumber;
    std::string holderName;
    float balance;
public:
    void withdraw(float withdrawValue);
    void deposit(float depositValue);
};
