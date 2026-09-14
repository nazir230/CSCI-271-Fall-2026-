// Naz Hossain
// CSCI 271 - Assignment 2

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "What is your name? ";
    cin >> name;

    cout << "How old are you? ";
    cin >> age;

    cout << "Hello, I am " << name << "! I am " << age << " years old." << endl;

    return 0;
}