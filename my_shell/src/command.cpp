#include "command.h"
#include <iostream>

using std::endl;

void passwd (std::string &name,int &pass,int &passV,std::string &input){ //command for passwd
    if(input == "passwd"){
        std::cout << "Changing password for " << name <<"." << endl << "(current) " << name << " password: ";
        std::cin >> pass;
        if(pass == passV){
            std::cout << "Enter new " << name << " password: ";
            std::cin >> pass;
            std::cout << "Retype new " << name << "password: ";
            std::cin >> passV;
            if(pass == passV){
                std::cout << "passwd: password updated successfully!" << endl;
            }
            else{
                std::cout << "ERROR!";
            }    
        }
        else{
            std::cout << "Wrong password!" << endl;
        }
    }
}

void sudo(std::string &input,int &pass,int &passV){
    if(input == "sudo"){
            std::cout << "Enter your password: ";
            std::cin >> pass;
            if(pass == passV){
                std::cout << "ok" << endl;
            }
            else{
                std::cout << "ERROR" << endl;
            }
    }
}

void helpexit(std::string &input,std::string &name){
    std::cout << "[" << name << "@SksLinux ~]$ ";
        std::cin >> input;

        if(input == "help"){//all orders that exist so far
            std::cout << "exit - exit     passwd - change the password     sudo" << endl << 
                         "gnum - guess the number     " << endl;
        }
        
        else if(input == "exit"){
            std::cout << "Exiting shell..." << endl;
        }
}

void gnum(int &num,int &compNum,std::string &input){ //guess the number game!
    
    if(input == "gnum"){

        while(num < 1 || num > 10){ //a while loop to force a player to enter a number between 1-10
            std::cout << "Your number(1-10): ";
            std::cin >> num;
            if(num < 1 || num > 10){
                std::cout << "You need to enter a number between 1-10! " << endl;
            }
        }

        std::cout << "The computer chose the number: " << compNum << endl;

        if(num == compNum){
            std::cout << "You win!" << endl;
        }
        else{
            std::cout << "You lose!" << endl;
        }
    }
}