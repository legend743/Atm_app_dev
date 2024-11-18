#include "ATM.hpp"
#include<iostream>


ATM::ATM() : bank_(){}
void ATM::run(){
    std::cout<<"Welcome to Axis Bank ATM"<<endl;
    handleLogin();
    handleTransactiions();
}
void ATM::showMenu(){
    std::cout<<"\n1.Check Balance\n2.Deposit\n3.Withdraw\n4.logout\n";
    std::cout<<"Enter Your Choice!!";
}
void handleTransactiions(){
    int choice;

    do{
        showMenu();
        std::cin>>choice;
        switch(choice){
            case 1:
            std::cout<<"Balance:"<<bank_.getBalance(loggedInAcccount_)<<"\n";
            break;
        }
        case 2:
    {
        double amount;
        std::cout<<"Enter the amount to deposit"<<endl;
        std::cin>>amount;
        bank_.deposit(loggedInAccount_,amount);
        std::cout<<"Amount Deposited succesfully!!!";
        break;

    }
    case 3:
    {      double amount;
        std::cout<<"Enter the amount to withdraw!!";
        if(bank_.withdraw(loggedInAccount_,amount)){
            std::cout<<"Withdrawal successful!!\n";

        }
        else{
            std::cout<<"Insufficient Balance!!";

        }
        break;
    }
    case 4:
    std::cout<<"loggin out...\n";
    loggedInAcount_="";
    return;
    default:
    std::cerr<<"Invalid Choice!!!!\n";


    }
    while(true);
}
void handleLogin(){
    std::string accountNumber,pin;
    std::cout<<"Enter Account Number: ";
    std::cin>>accountNumber;
    std::cout<<"Enter Pin: ";
    std::cin>>pin;
    if(bank_.authenticate(accountNumber,pin)){
        loggedInAccount_= accountNumber;
        std::cout<<"Login Successfull!!";
    }else{
        std::cerr<<"Invalid Credentials. Exiting...\n";
        exit(1);
    }
          
}

