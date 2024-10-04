#include <iostream>

using std::string;

int main(){

    //create a string 
    string name = "Skye";

    

    // //create a pointer to that strings memory address
    // string *pName = &name;

    // //arrays point to a memory address by default, so need to add the & operator to the array
    // string freepizza[2] = {"p1","p2"};
    // string *pFreePizza = freepizza;

    // std::cout << freepizza[0] << " \n";

    // std::cout << pName << " \n"; //displays the address
    // std::cout << *pName << " \n"; //displays the data stored in the address ("Skye")

    // //non pointers but can still access the data
    // std::cout << name << " \n"; //displays the data stored
    // std::cout << &name << " \n"; //displays memory address
    return 0;
}