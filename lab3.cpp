/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Kusum Bhattarai Sharma
//09/18/2023
//CS1428 Lab
//Lab 3
//Description: this program will allow the user to play a game of Slug, Frog
//  Snake against a randomized computer opponent

#include <iostream>

using namespace std;

int main()
{
    int user_num;  //user's choice
    int comp_num;  //computer's choice

    // Generate the computer's choice randomly:

    srand(time(NULL));
    comp_num = rand() % 3 + 1;

    // Get the user's choice:
    cout << "Slug-Frog-Snake Game" << endl
         << " 1. Slug" << endl
         << " 2. Frog" << endl
         << " 3. Snake" << endl
         << "Enter a number : ";
    cin >> user_num;
    cout << endl;
     cout << comp_num <<endl;
     
     if(user_num==1 && comp_num==2)
    cout << "Frog beats slug. You lose!" << endl;
    
    else if(user_num == 2 && comp_num == 1)
    cout<<"Frog beats slug. You win!" << endl;
    
    else if(user_num == 3 && comp_num == 2)
    cout<<"Snake beats frog. You win!" <<endl;
    
    else if(user_num == 2 && comp_num == 3)
    cout<< "Snake beats frog. You lose!"<<endl;
    
    else if (user_num == 3 && comp_num == 3)
    cout << "Tie!" << endl;
    
    else if(user_num == 1 && comp_num == 3)
    cout <<"Slug beats snake. You win!" <<endl;
    
    else if (user_num == 3 && comp_num == 1)
    cout << "Slug beats snake. You lose!" << endl;
    
    else if (user_num == 2 && comp_num == 2)
    cout << "Tie!" << endl;
    
    else if(user_num == 1 && comp_num == 1)
    cout << "Tie!" << endl;
    
    else if(user_num > 3)
    cout << "Invalid input" <<endl;
    

    return 0;
}