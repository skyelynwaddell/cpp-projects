#include <iostream>
using std::string;
using std::cout;
using std::size;

int GetTotal(string cars[], int _size);

int main(){

    //define a string array 
    string cars[3] = {"Car1", "Car2", "Car3"};

    int numb = 2;
    int total = GetTotal(cars, sizeof(cars) / sizeof(cars[0]));

    //fori loop
    for (int i=0; i < size(cars); i++){
        cout << cars[i] << " \n";
    }

    //for each
    for (string car : cars){
        cout << car << " \n";
        cout << total;
    }

    return 0;
}

int GetTotal(string cars[], int _size){
    for (int i=0; i < _size; i++){
        cout << cars[i] << " \n";
    }
    return _size;
}