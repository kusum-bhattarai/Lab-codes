//Kusum Bhattarai Sharma
//09/25/2023
//CS1428 Lab
//Lab 4
//Description: this program will calculate the cost of a TV
// plan based on user choices.
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char user_choice; //user's choice
    char double_price; //price of monthly package
// Ask the user for their plan choice:
    
    cout << "Enter the package name you wish to purchase: ";
    cin >> user_choice;
    
// TODO: Use a switch statement to evaluate the total cost of the
// customer's monthly bill based on the selected plan.

    switch(user_choice)
    {
       case 'A':
        case 'a':
        cout << "For $19.99 per month the customer will get 50 channels";
        cout << " Additional sports channel plan is $9.99." << endl;
    
    cout << "Do you want a sports plan?" <<endl;
    cin >> double_price;
    switch (double_price)
    {
       case 'Y':
        case 'y':
        cout << "The total price of your package is $" ;
        cout << (19.99 + 9.99) << endl;
        break; 
        
        case 'N':
        case 'n':
        cout << "The total price of your package is $19.99." <<endl;
        break; 
    }
    break;
    
    //switch (user_choice)
    
        case 'B':
        case 'b':
        cout << "For $39.99 per month the customer will get 50 channels and HD channels."; 
        cout << " Additional sports channel plan is $9.99." << endl;
      
    
    cout << "Do you want a sports plan?" <<endl;
    cin >> double_price;
    switch (double_price)
    {
       case 'Y':
        case 'y':
        cout << "The total price of your package is $" ;
        cout << (39.99 + 9.99) << endl;
        break; 
        
        case 'N':
        case 'n':
        cout << "The total price of your package is $39.99." <<endl;
        break; 
    }
    break;
  
      case'C':
        case'c':
        cout << "For $45.99 per month the customer will get all the channels along with HD ";
        cout << "and sports channel plan."<<endl;
      
        cout << "Do you want a sports plan?" <<endl;
    cin >> double_price;
    switch (double_price)
    {
       case 'Y':
        case 'y':
        cout << "The total price of your package is $" ;
        cout << (45.99 + 9.99) << endl;
        break; 
        
        case 'N':
        case 'n':
        cout << "The total price of your package is $45.99." <<endl;
        break; 
    }
    break;
    
    default:
    cout << "Invalid Input."<<endl;
    break;
        
    }
    
// Exit the program:
return 0;
}
