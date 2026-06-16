#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    char again;
    int calculationCount = 1;

    cout << "====================================" << endl;
    cout << "       SIMPLE CALCULATOR" << endl;
    cout << "====================================" << endl;

    do {
        cout << "\nCalculation #" << calculationCount << endl;

        cout << "\nEnter First Number: ";
        cin >> num1;

        cout << "Enter Second Number: ";
        cin >> num2;

        cout << "\nChoose Operation:" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;

        cout << "\nEnter your choice (1-4): ";
        cin >> choice;

        switch(choice) {
            case 1:
                result = num1 + num2;
                cout << "\nResult = " << result << endl;
                break;

            case 2:
                result = num1 - num2;
                cout << "\nResult = " << result << endl;
                break;

            case 3:
                result = num1 * num2;
                cout << "\nResult = " << result << endl;
                break;

            case 4:
                if(num2 != 0) {
                    result = num1 / num2;
                    cout << "\nResult = " << result << endl;
                } else {
                    cout << "\nError! Division by zero is not allowed." << endl;
                }
                break;

            default:
                cout << "\nInvalid Choice!" << endl;
        }

        cout << "\nDo you want to perform another calculation? (Y/N): ";
        cin >> again;

        calculationCount++;

    } while(again == 'Y' || again == 'y');

    cout << "\n====================================" << endl;
    cout << "Thank You For Using Calculator!" << endl;
    cout << "Total Calculations Performed: " << calculationCount - 1 << endl;
    cout << "====================================" << endl;

    return 0;
}
