/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//Kusum Bhattarai Sharma
//09/14/2023
//xcm15
//Pre-lab1


#include <iostream>

 using namespace std;

int main()

{

// question1 

//Declaring j,i
    int j, i;

    cout << "Enter the value for j" << endl;
    cin >> j;

    cout << "Enter the value for i" << endl;
    cin >> i;
    
    //Declaring k,l to store the calculations
    
    int k,l; 
    
    k = j * j * j * j * j;

    l = i/95;

    cout << "j to the power of 5 = " << k << endl;

    cout << " i/95 = " << l  << endl;
    
  
    //question 2
    //Declaring pounds to keep value of number of pounds
    int pounds; 
   
    cout << "Many pounds can you lift?" << endl;
    cin >> pounds;
   
   //Converting pounds to kilograms 
    cout << "The weight you can lift in kilograms= " << (pounds/2.20462) <<endl;

return 0;
}