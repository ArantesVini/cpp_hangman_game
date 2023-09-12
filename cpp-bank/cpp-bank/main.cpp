#include <iostream>
#include <string>

using namespace std;

struct Account
{
    string number;
    string holderDocumentNumber;
    string holderName;
    float balance;
};


void withdraw(Account& account, float withdrawValue)
{
    if (account.balance < withdrawValue)
    {
        cout << "Insufficient funds." << endl;
        return;
    }
    
    if (withdrawValue <= 0)
    {
        cout << "Invalid withdraw value" << endl;
        return;
    }
    account.balance -= withdrawValue;
}


void deposit(Account& account, float depositValue)
{
    if (depositValue <= 0)
    {
        cout << "Invalid deposit value" << endl;
        return;
    }
    account.balance += depositValue;
}

int main(int argc, const char * argv[]) {
    Account myAccount;
    
    myAccount.number = "12345-6";
    myAccount.holderDocumentNumber = "123-456";
    myAccount.holderName = "Vinicius Arantes";
    myAccount.balance = 100;
    
    cout << myAccount.balance << endl;
    
    deposit(myAccount, 500);
    cout << myAccount.balance << endl;
    
    withdraw(myAccount, 80);
    cout << myAccount.balance << endl;
}
