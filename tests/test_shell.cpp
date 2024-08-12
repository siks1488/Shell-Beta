#include "shell.h"
#include <iostream>

using std::endl;

void acc(std::string &name,int &pass,int &passV){

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Enter your password(number only): ";
    std::cin >> pass;

    std::cout << "Retype new password: ";
    std::cin >> passsV;

    while(pass != passV){
        if(pass == passV){
            std::cout <<"The new account has been created!";
        }
        else{
            std::cout << "Wrong password!";
        }
    }
}
