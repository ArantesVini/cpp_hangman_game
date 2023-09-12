#include "Account.hpp"
#include <iostream>

// Getters
std::string Account::getNumber()
{
    return number;
}

std::string Account::getHolderDocumentNumber()
{
    return holderDocumentNumber;
}

std::string Account::getHolderName()
{
    return holderName;
}

float Account::getBalance()
{
    return balance;
}

// Setters
void Account::setNumber(std::string num)
{
    number = num;
}

void Account::setHolderDocumentNumber(std::string documentNumber)
{
    holderDocumentNumber = documentNumber;
}

void Account::setHolderName(std::string name)
{
    holderName = name;
}

// Methods
void Account::withdraw(float withdrawValue)
{
    if (balance < withdrawValue)
    {
        std::cout << "Insufficient funds." << std::endl;
        return;
    }
    
    if (withdrawValue <= 0)
    {
        std::cout << "Invalid withdraw value" << std::endl;
        return;
    }
    balance -= withdrawValue;
}


void Account::deposit(float depositValue)
{
    if (depositValue <= 0)
    {
        std::cout << "Invalid deposit value" << std::endl;
        return;
    }
    balance += depositValue;
}
