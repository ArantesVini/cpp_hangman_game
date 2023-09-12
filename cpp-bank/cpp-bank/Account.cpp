#include "Account.hpp"
#include <iostream>

// Constructor
Account::Account(std::string number, std::string holderDocumentNumber, std::string holderName)
{
    this->number = number;
    this->holderDocumentNumber = holderDocumentNumber;
    this->holderName = holderName;
    this->balance = 0;
}

// Getters
std::string Account::getNumber() const
{
    return number;
}

std::string Account::getHolderDocumentNumber() const
{
    return holderDocumentNumber;
}

std::string Account::getHolderName() const
{
    return holderName;
}

float Account::getBalance() const
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
