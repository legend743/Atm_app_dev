#ifndef ATM_HPP
#define ATM_HPP
#include "Bank.hpp"

class ATM
{
    public:
    ATM();
    void run();
    
private:
    void showMenu();
    void handleLogin();
    void handleTransactions();
    Bank bank_;
    std::string loggedInAccount_;

};
#endif //ATM hpp


