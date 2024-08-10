#ifndef COMMAND_H
#define COMMAND_H

#include <string>

void passwd(std::string &name, int &pass, int &passV, std::string &input);
void sudo(std::string &input,int &pass, int &passV);
void helpexit(std::string &input,std::string &name);
void gnum(int &num,int &compNum,std::string &input);


#endif 