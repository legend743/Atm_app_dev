#include "Account.hpp"


Account::Account(const std::string &accountNumber,const std::string &pin, double balance):accountNumber_(accountNumber),pin_(pin),balance_(balance){};



bool Account::validatePin(const std::string &pin) const{
    return pin==pin_;
}

double Account::getBalance() const{
    return balance_;

}
void Account::deposit(double amount){
balance_+=amount;
}
bool Account::withdraw(double amount){
    if(balance_>=amount){
        balance_-=amount;
        return true;
    }
    return false;
}