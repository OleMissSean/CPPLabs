/*
Sean Staz
CSC 2134
6-2 Exercise 4
Program sumDigits prompts for and reads a one-digit number.
Values between 0 and the digit (inclusive) are summed.
*/

#include <iostream>
using namespace std;

int main ()
{
  int counter;	// Loop-control variable
  int sum;		// Running sum
  int digit;	// Defines a digit
  
  digit = 0; // Starts the digit at 0

  cout << "This program will add up positive one-digit numbers. " << endl;
  cout << "The program will finish when a negative number is entered. " << endl;
  cout << "Enter a one-digit number; press return." // User instructions to imput a digit
       << endl;
  
  counter = 0; // Amount loop has ran
  sum = 0;	  // Sets the beggining sum
                     
                    

  while (digit >= 0)	// Sets the counter to only continue if
  										// the digit and counter is less than 10          	                                    
  {                                                         
  	cin >> digit; 		// Gets digit
  	if (digit >=0)  	// Makes sure digit is greater than or equal to 0                                                 
   {
   		sum = sum + digit; // Adds digit to sum
    	counter++;  // Adds 1 to count
     	cout << "Enter a one-digit number; press return."
       		 << endl;
   }
  
   else
	// output the sum of the positive digits entered.
  
  cout << "The sum of the positive digits entered is "
       << sum  << endl;
  }
  return 0;
  }
