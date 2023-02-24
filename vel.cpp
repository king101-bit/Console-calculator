#include <iostream>

using namespace std;

int main() {
    int choice;
    float num1, num2;

    //Display welcome message
    cout<<"Welcome to the calculator program!" << endl << endl;

    //Display menu
    cout << "Please select an operation: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;

    //Get user input
    cout << "Enter your choice: ";
    cin >> choice;

    //Perform selected operation
    switch (choice) {
        case 1:
        cout << "Enter two numbers to add: ";
        cin >> num1 >> num2;
        cout << "Result:" << num1 + num2 << endl;
        break;
        case 2:
        cout << "Enter two numbers to subtract: ";
    
