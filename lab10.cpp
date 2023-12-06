//Kusum Bhattarai Sharma
//11/06/2023
//CS1428 Lab
//Lab 10
//Description: this program will find letter grades from 5 number grades
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########
#include <iostream>
using namespace std;

void getGrades(double grades[], const int SIZE)
{
    cout << "Please enter 5 grades:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> grades[i];
    }
}

double getAverage(double grades[], const int SIZE)
{
    double total = 0;
    for (int i = 0; i < SIZE; i++)
    {
        total += grades[i];
    }
    return total / SIZE;
}
// TODO: Complete function definitions
void countLetterGrades(double grades[], const int SIZE, int &numberOfAs, 
int &numberOfBs, int &numberOfCs, int &numberOfDs, int &numberOfFs)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (grades[i] >= 90)
        {
            numberOfAs++;
        }
        else if (grades[i] >= 80)
        {
            numberOfBs++;
        }
        else if (grades[i] >= 70)
        {
            numberOfCs++;
        }
        else if (grades[i] >= 60)
        {
            numberOfDs++;
        }
        else
        {
            numberOfFs++;
        }
    }
}

void printData(double average, int numberOfAs, int numberOfBs, 
int numberOfCs, int numberOfDs, int numberOfFs)
{
    cout << "Average: " << average << endl;
    cout << "Number of A's: " << numberOfAs << endl;
    cout << "Number of B's: " << numberOfBs << endl;
    cout << "Number of C's: " << numberOfCs << endl;
    cout << "Number of D's: " << numberOfDs << endl;
    cout << "Number of F's: " << numberOfFs << endl;
}

int main()
{
    const int SIZE = 5;
    double grades[SIZE], average;
    int numberOfAs = 0, numberOfBs = 0, numberOfCs = 0, numberOfDs = 0, 
    numberOfFs = 0;
//TODO: Add function calls

    getGrades(grades, SIZE);
    average = getAverage(grades, SIZE);
    countLetterGrades(grades, SIZE, numberOfAs, numberOfBs, numberOfCs, 
    numberOfDs, numberOfFs);
    printData(average, numberOfAs, numberOfBs, numberOfCs, numberOfDs,
    numberOfFs);

    return 0;
}
