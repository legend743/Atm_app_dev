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

}
void handleLogin(){
    std::string accountNumber,pin;
    std::cout<<"Enter Account Number: ";
    std::cin>>accountNumber;
    std::cout<<"Enter Pin: ";
    std::cin>>pin;
          
}