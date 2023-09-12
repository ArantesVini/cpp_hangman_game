#include <iostream>
#include <string>
#include "Account.hpp"
#include "Holder.hpp"


using namespace std;


int main(int argc, const char * argv[]) {
    Account myAccount("12345-6", Holder("Vinicius Arantes", "123-456"));
    
    myAccount.deposit(500);
    cout << myAccount.getBalance() << endl;
    
    myAccount.withdraw(90);
    cout << myAccount.getBalance() << endl;
}
