// Name: Nazir Hossain
// Assignment 4

#include <iostream>
using namespace std;

int main() {
    // This variable stores the number entered by the user.
    int number;

    // Ask the user to enter a number.
    cout << "Enter a number: ";
    cin >> number;

    // Repeat the loop from 1 through 10.
    for (int i = 1; i <= 10; i++) {
        // Multiply the number by i and print the result.
        cout << number << " x " << i << " = " << number * i << endl;
    }

    // End the program.
    return 0;
}