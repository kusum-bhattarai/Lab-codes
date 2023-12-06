//Kusum Bhattarai Sharma
//10/16/2023
//CS1428 Lab
//Lab 7
//Description: this program will print a sequence of even and odd numbers
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Function prototypes:

int getUserChoice();
void findEvenNumbers();
void findOddNumbers();
int main()
{
    int user_choice;
    do
    {
    cout << endl
    << "What would you like to do?" << endl
    << "1. Find even numbers 0 - N" << endl
    << "2. Find odd numbers 0 - N" << endl
    << "3. Quit program" << endl << endl;
    
    cout << "Enter your choice: ";
    
    user_choice = getUserChoice(); // Function call

    switch(user_choice)
    {
        case 1:
        findEvenNumbers(); // Function call
        break;
        
        case 2:
        findOddNumbers(); // Function call
        break;
        
        case 3:
        cout << "Terminating program..." << endl;
        break;

        default:
        cout << "ERROR: Invalid choice. Select a valid menu item."
        << endl << endl;
    }
    }while( user_choice != 3 );
return 0;
}
// Function definitions:
// ADD YOUR CODE HERE

int getUserChoice() 
{
    int choice;
    cin >> choice;
    return choice;
}

void findEvenNumbers() 
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "Even numbers: ";
    for (int i = 0; i <= n; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

void findOddNumbers() 
{
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "Odd numbers: ";
    for (int i = 0; i <= n; i++ ) {
        if (i%2!=0)
        {
        cout << i << " ";
        }
    }
    cout << endl;
}



