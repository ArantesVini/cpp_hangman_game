#include "Account.hpp"
#include <iostream>

// Constructor

int Account::accountsQuantity = 0;

Account::Account(std::string number, std::string holderDocumentNumber, std::string holderName):
    number(number),
    holderDocumentNumber(holderDocumentNumber),
    holderName(holderName),
    balance(0)
{
    accountsQuantity++;
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

int Account::getAccountsQuantity()
{
    return accountsQuantity;
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
