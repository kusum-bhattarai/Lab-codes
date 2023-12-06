//Kusum Bhattarai Sharma
//10/23/2023
//CS1428 Lab
//Lab 8
//Description: this program will perform some computations on a set of numbers
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
using namespace std;
// Function Prototypes:
bool isValidnum(int);
bool isValidop(char);
int result(int, char);

int main()
{
    int n, sum;
    char op, cont;

    do{
        cout << "Enter a number [1 - 100]:";
        cin >> n;

        while(!isValidnum(n)) { // Function Call
            cout << "ERROR: Number must be between 1 and 100." << endl
            << "Enter a valid number [1- 100]: ";
            cin >> n;
        }

        cout << "Enter an operand [+, -, *]:";
        cin >> op;
        
        while(!isValidop(op)){ // Function Call
            cout << "ERROR: Operand must be either +, - or *" << endl
            << "Enter a valid operand [+, -, *]: ";
            cin >> op;
        }

sum = result(n, op); // Function Call

    cont = 'n';
        switch (op) {
            case '+':
                cout << "The sum";
                break;
            case '-':
                cout << "The difference";
                break;
            case '*':
                cout << "The product";
                break;
        }
        
    cout << " of numbers from 1 to " << n << " is " << sum << endl;
    
    if (cont != 'y' && cont != 'Y') {
            cout << "Do you want to continue (y / n): ";
            cin >> cont;
        }

    } while (cont == 'y' || cont == 'Y');

    return 0;
}

    bool isValidnum(int num) {
    return (num >= 1 && num <= 100);
}

bool isValidop(char op) {
    return (op == '+' || op == '-' || op == '*');
}

int result(int n, char op) {
    int result = 0;
    switch (op) {
        case '+':
            for (int i = 1; i <= n; i++) {
                result += i;
            }
            break;
        case '-':
            result = 1;
            for (int i = 2; i <= n; i++) {
                result -= i;
            }
            break;
        case '*':
            result = 1;
            for (int i = 1; i <= n; i++) {
                result *= i;
            }
            break;
    }
    return result;
}


