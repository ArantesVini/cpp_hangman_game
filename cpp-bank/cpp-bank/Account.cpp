#include "Account.hpp"
#include <iostream>

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
