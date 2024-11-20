#ifndef ATM_HPP
#define ATM_HPP
#include "Bank.hpp"

class ATM
{
    public:
    ATM();
    void run();
    

    static void showMenu();
    void handleLogin();
    void handleTransactions(ATM &atm);
    Bank bank_;
    std::string loggedInAccount_;

};
#endif //ATM hpp


