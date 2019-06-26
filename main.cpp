#include <iostream>
#include "NameMagic.hpp"
using namespace std;
int main (){
cout<<"What's your name'"<<std::endl;
string name;
cin>>name;
cout<<magicName(name);
return 0;
}

