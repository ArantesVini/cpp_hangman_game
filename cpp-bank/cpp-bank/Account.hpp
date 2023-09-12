#pragma once

#include <string>

class Account
{
private:
    std::string number;
    std::string holderDocumentNumber;
    std::string holderName;
    float balance = 0;
public:
    std::string getNumber();
    std::string  getHolderDocumentNumber();
    std::string  getHolderName();
    void setNumber(std::string num);
    void setHolderDocumentNumber(std::string documentNumber);
    void setHolderName(std::string name);
    float getBalance();
    void withdraw(float withdrawValue);
    void deposit(float depositValue);
};
