//Kusum Bhattarai Sharma
//xcm15
//10/09/2023
//CS1428 Lab
//Lab 6
//Description: this program will print n even or odd numbers
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########
#include <iostream>
using namespace std;
int main()
{
int choice,N;
// Prompt the user for their choice:
do{
cout << "What would you like to do?\n"
<< "1. Find even numbers 0 - N\n"
<< "2. Find odd numbers 0 - N\n"
<< "3. Quit program\n"
<< "Enter your choice: ";
cin >> choice;
// TODO: Create a loop to perform desired operations until user chooses to
  switch(choice){
      case 1: cin>>N;
              for(int i=0;i<=N;i++){
                  if(i%2==0)
                   cout<<i<<" ";
              }
              cout<<endl;
              break;
        case 2:cin>>N;
              for(int i=0;i<=N;i++){
                  if(i%2!=0)
                   cout << i <<" ";
              }
              cout<<endl;
              break;
        case 3: cout<<"terminating program";
        break;
        default: cout<<"ERROR: Invalid choice. Select a valid menu item.";
  }
}while(choice!=3);
        

// Display end of program message:
return 0;
}
