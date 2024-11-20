#include "Bank.hpp"

Bank::Bank(){
//Adding dummy accounts for demonstrations
accounts_.emplace("758100046690",Account("758100046690","0000",1000.0));
accounts_.emplace("758100046690",Account("758100056690","9999",11000.0));
}
bool Bank::authenticate(const std::string &accountNumber,const std::string &pin){
    if(accounts_.find(accountNumber)!=accounts_.end()){
        return accounts_[accountNumber].validatePin(pin);

    }
    return false;
}
double Bank::getBalance(const std::string &accountNumber){
    return accounts_[accountNumber].getBalance();

}
void Bank::deposit(const std::string &accountNumber,double amount){
    accounts_[accountNumber].deposit(amount);
}
bool Bank::withdraw(const std::string &accountNumber,double amount){
    return accounts_[accountNumber].withdraw(amount);
}
