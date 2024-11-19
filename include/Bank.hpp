#ifndef BANK_HPP
#define BANK_HPP
#include "Account.hpp"
#include <unordered_map>
class Bank{
    public:
    Bank();
    bool authenticate(const std::string &accountNumber,const std::string &pin);
    double getBalance(const std::string &accountNumber);
    void deposit(const std::string &accountNumber,double amount);
    bool withdraw(const std::string &accountNumber,double amount);
    

    private:
    std::unordered_map<std::string,Account> accounts_;

};
#endif //BANK_HPP