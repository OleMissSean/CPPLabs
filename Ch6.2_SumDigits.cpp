/*
Sean Staz
CSC 2134
6-2 Exercise 4
Program SumDigits prompts for and reads a one-digit number.
Values between 0 and the digit (inclusive) are summed.
*/

#include <iostream>
using namespace std;

int main ()
{
  int counter;	// Loop-control variable
  int sum;		// Running sum
  int digit;	// Defines a digit

  cout << "Enter a one-digit number; press return." // User instructions to imput a digit
       << endl;
       
  cin  >> digit; // Retreives input digit
  
  counter = 0; // Amount loop has ran
  sum = 0;	  // Sets the beggining sum
                     
                    

  while (counter <= digit && digit <=9)	// Sets the counter to only continue if
  										// the digit and counter is less than 10          	                                    
  {                                                         
  		sum = sum + counter;   			// Adds the current sum with the counter
	  	counter++;                      // Adds 1 to the count every time it is executed
  }
  
  cout << "Sum of digits between 0 and "		// User instructions
       << digit  << " is "  << sum  << endl;	// Outputs answer
       
  return 0;
}
