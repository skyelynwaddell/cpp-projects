#include <iostream>
#include <vector>
using std::string;
using std::vector;
using std::pair;

using text_t = std::string;

//type definitions / type alias :O

int main(){

    srand(time(NULL));

    int num = (rand() % 6) + 1; //gives random number between 1 - 6
    std::cout << num;

    double intToDouble = (int) 10.0;
    text_t helloworld = "Hello";
    return 0;
}

