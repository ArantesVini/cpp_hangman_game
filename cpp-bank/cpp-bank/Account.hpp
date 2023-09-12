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
    Account(std::string number, std::string holderDocumentNumber, std::string holderName);
    std::string getNumber() const;
    std::string  getHolderDocumentNumber() const;
    std::string  getHolderName() const;
    float getBalance() const;
    void withdraw(float withdrawValue);
    void deposit(float depositValue);
};
