// Name: Nazir Hossain
// Assignment 4

#include <iostream>
using namespace std;

int main() {
    // This variable stores the menu choice.
    int choice;

    // This loop runs at least once and keeps asking until the choice is valid.
    do {
        // Ask the user to enter a menu choice.
        cout << "Enter a menu choice (1, 2, or 3): ";
        cin >> choice;

        // Check if the choice is not 1, 2, or 3.
        if (choice != 1 && choice != 2 && choice != 3) {
            // Tell the user the choice is invalid.
            cout << "Invalid choice, try again." << endl;
        }

    // Repeat while the choice is invalid.
    } while (choice != 1 && choice != 2 && choice != 3);

    // Display the valid choice.
    cout << "You selected option " << choice << "." << endl;

    // End the program.
    return 0;
}