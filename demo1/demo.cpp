#include <iostream>
using namespace std;

int main()
{
    //get user input
    cout << "Enter two numbers:" << endl;

    int n1 = 0;
    int n2 = 0;

    //get 2 inputs and store them in vars
    cin >> n1 >> n2;

    //calculate and display results
    cout << "The sum of " << n1 << "+" << n2 
    << " is: " << n1 + n2 << endl;

    return 0;
}