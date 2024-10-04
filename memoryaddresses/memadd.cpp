#include <iostream>

void Swap(int &x, int &y);

int main(){

    std::string student = "";

    int x = 100;
    int y = 100;

    Swap(x,y);

    std::cout << x << " " << y << " \n";

    std::cout << &x << " \n";
    std::cout << &y << " \n";
    std::cout << &student << " \n";
    return 0;
}

void Swap(int &x, int &y){
    x = 20;
    y = 20;
}