#include <iostream>
#include <string>
#include "Account.hpp"


using namespace std;


int main(int argc, const char * argv[]) {
    Account myAccount;
    
    myAccount.deposit(500);
    
    myAccount.withdraw(90);
}
