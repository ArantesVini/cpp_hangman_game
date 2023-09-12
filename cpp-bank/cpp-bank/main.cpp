#include <iostream>
#include <string>
#include "Account.hpp"


using namespace std;


int main(int argc, const char * argv[]) {
    Account myAccount("12345-6", "123-456", "Vinicius Arantes");
    cout << myAccount.getHolderName() << endl;
    
    myAccount.deposit(500);
    cout << myAccount.getBalance() << endl;
    
    myAccount.withdraw(90);
    cout << myAccount.getBalance() << endl;
    
    Account otherAccount("12345-6", "123-456", "Vinicius Arantes");
    
    cout << Account::getAccountsQuantity() << endl;
}
