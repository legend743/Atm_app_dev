#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include<string>
class Account{


    public:

    Account();      //default constructor
    Account(const std::string &accountNumber,const std::string &pin,double balance);
    bool validatePin(const std::string &pin) const;
    double getBalance() const;
    void deposit (double amount);
    bool withdraw(double amount);
    private:
    std::string accountNumber_;
    std::string pin_;
    double balance_;
};
#endif