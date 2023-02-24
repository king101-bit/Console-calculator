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
        cin >> num1 >> num2;
        cout << "Result:" << num1 - num2 << endl;
        break;
        case 3:
        cout << "Enter two numbers to multiply: ";
        cin >> num1 >> num2;
        cout << "Result:" << num1 * num2 << endl;
        break;
        case 4:
        cout << "Enter two numbers to divide: ";
        cin >> num1 >> num2;
        if (num2 == 0) {
            cout << "Math Error Cannot Divide by Zero." << endl;
        } else{
            cout << "Result:" << num1 / num2 << endl;
        }
        break;
      case 5:
      cout << "Exiting program." << endl;
      break;
      default:
      cout << "Invalid choice. Please try again." << endl;
      break;
    } 
}