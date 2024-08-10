#include <iostream>
#include "command.h"
#include "shell.h"
#include <ctime>

using std::endl;

int main(){
    srand(time(0));

    std::string input;
    std::string name;
    int pass;
    int passV;
    int num;
    int compNum = rand() % 10 + 1;

    acc(name,pass,passV);

    while(input != "exit"){
        helpexit(input,name);
        sudo(input,pass,passV);
        passwd (name,pass,passV,input);
        gnum(num,compNum,input);
    }
    return 0;
}

