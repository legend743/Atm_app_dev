#include "ATM.hpp"
#include<iostream>

ATM atm;
ATM::ATM() : bank_(){}
void ATM::run(){
    std::cout<<"Welcome to Axis Bank ATM"<<std::endl;
    handleLogin();
    handleTransactiions(atm);
}
void ATM::showMenu(){
    std::cout<<"\n1.Check Balance\n2.Deposit\n3.Withdraw\n4.logout\n";
    std::cout<<"Enter Your Choice!!";
}

void handleLogin(){


    std::string accountNumber,pin;
    std::cout<<"Enter Account Number: ";
    std::cin>>accountNumber;
    std::cout<<"Enter Pin: ";
    std::cin>>pin;
    if(atm.bank_.authenticate(accountNumber,pin)){
        atm.loggedInAccount_= accountNumber;
        std::cout<<"Login Successfull!!";
    }else{
        std::cerr<<"Invalid Credentials. Exiting...\n";
        exit(1);
    }
          
}
void handleTransactiions(ATM &atm){
    int choice;

    do{
        atm.showMenu();
        std::cin>>choice;
        switch(choice){
            case 1:
            std::cout<<"Balance:"<<atm.bank_.getBalance(atm.loggedInAccount_)<<"\n";
            break;
        
        case 2:
    {
        double amount;
        std::cout<<"Enter the amount to deposit"<<std::endl;
        std::cin>>amount;
        atm.bank_.deposit(atm.loggedInAccount_,amount);
        std::cout<<"Amount Deposited succesfully!!!";
        break;

    }
    case 3:
    {      double amount;
        std::cout<<"Enter the amount to withdraw!!";
        if(atm.bank_.withdraw(atm.loggedInAccount_,amount)){
            std::cout<<"Withdrawal successful!!\n";

        }
        else{
            std::cout<<"Insufficient Balance!!";

        }
        break;
    }
    case 4:
    std::cout<<"loggin out...\n";
    atm.loggedInAccount_="";
    return;
    default:
    std::cerr<<"Invalid Choice!!!!\n";


    }
   
}
 while(true);
}


