#include <iostream>
#include "NameMagic.hpp"

int main (){
std::cout<<"Hello from CPP"<<"What's your name'"<<std::endl;
std::string name;
std::cin>>name;
std::cout<<magicName(name);
return 0;
}

