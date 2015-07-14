/*
Sean Staz
CSC 2134
6-2 Exercise 1
Program Count prompts for, reads, echo prints, and sums a 
fixed number of integer values.  The sum is printed.
*/

#include <iostream>
using namespace std;

int main ()
{ 
  int amount;  				 // Inputs number of integers the user wants to add                                                       
  int counter;               // Loop-control variable
  int sum;                   // Integer sum          
  int dataValue;               // Input numbers
  counter = 0;                                               
  sum = 0;              
  
  cout << "Enter the number of integers you wish to be added" << endl; // User instructions
  
  cin >> amount;  // Fills amount with user input
  
  while (counter <= (amount-1))  // Executes loop
                                  
  {
    cout << "Enter an integer value." // User instructions 
   		 << endl;
    cin >> dataValue;  // Fills dataValue with user input
    sum = sum + dataValue;  // Calculates sum
    counter++;  // Adds one for counter
  }
  
  cout << "Sum is " << sum << endl; // Outputs sum
  return 0;
}
