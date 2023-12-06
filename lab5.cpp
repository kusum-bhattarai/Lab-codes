//Kusum Bhattarai Sharma
//10/02/2023
//CS1428 Lab
//Lab 5
//Description: this program will print the first n factorials
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########

#include <iostream>
using namespace std;
int main() 
{
int num, factorial;
num <=12;
factorial = 1;
// Prompt the user for a number:
cout << "Enter a number to find its factorial: ";
cin >> num;
cout << endl;
// TODO: Validate input, then calculate and print the factorial:
    if (num==0) 
    cout << "The factorial is 1."<<endl; 
   
    else if(num>12)
        cout << "The number cannot be greater than 12." <<endl;
    
    else{
    for (int a=1; a<=num; a++ )
    {
        factorial = factorial * a;
    }
    cout << "The factorial is " << factorial <<"." << endl;
    }
    
return 0;
}
