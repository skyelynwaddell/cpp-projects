#include <iostream>

//function initializers
void PrintInfo(const std::string &name, const int &age);

int main(){

    std::string name = "Skye";
    int age = 21;

    PrintInfo(name,age);

    return 0;
}

void PrintInfo(const std::string &name, const int &age){
    name = "bob";
    age = 1000;
    std::cout << name << " " << age << " \n";
}