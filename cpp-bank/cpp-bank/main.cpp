#include <iostream>
#include <string>
#include "Account.hpp"


using namespace std;


int main(int argc, const char * argv[]) {
    Account myAccount;
    
    myAccount.deposit(500);
    cout << myAccount.getBalance() << endl;
    
    myAccount.withdraw(90);
    cout << myAccount.getBalance() << endl;
}
