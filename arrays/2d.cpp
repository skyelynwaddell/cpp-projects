#include <iostream>
using std::string;
using std::cout;

int main(){

    string cars[][2] = {{"Mustang", "Escape"},
                      {"Corvette","Equinox"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for (int i=0; i < rows; i++){

        for (int j=0; j < columns; j++){
            cout << cars[i][j] << " \n";
        }
    }

    return 0;
}