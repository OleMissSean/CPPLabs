/*
Sean Staz
CSC 2134
Program boxesWithFunction
Program boxesWithFunction promts for a symbol and length to create a box.
*/     

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void  Print(int number, char symbol); // Declars void function Print

int main ()
{
  int  number;	// Declaration of int and char
  char symbol;

  cout << "Enter the symbol you would like to use to make a box. " << endl; 	// Gets symbol
  cout << "Press return. " << endl;
  cout << "Enter end-of-file character to quit. "  << endl;
         cin >> symbol;
  
  cout << "Enter the number of symbols you want for the top." << endl;			// Gets number of symbols
  cout << "Press return." << endl;
  cout << "Enter end-of-file character to quit."  << endl;
  cin >> number;
  
  while (cin)
  {    
   Print(number, symbol); 		// Inputs number and symbol into Print function

    cin >> number;
    cin >> symbol;
  }
  return 0;
}
 
//*******************************************************  
  
void  Print(int number, char symbol)	// Runs function Print
{
  float count;		// Declars floats and int
  float counts;
  float counter;
  int five;
  
  count = number;		// Sets top and bottom to the number the user input
  counts = number;
  
  five = number % 2;	// Declares five
  
  if (five = 0)							// Rounds up
  counter = number/2 - 2;
  
  else
  counter = (number + 1)/2 - 2;
  
  while (count > 0)			// Couts for the box
  	{
	  cout << symbol;
	  count--; 
  	}
  	cout << endl;
	while (counter > 0)
	{
		cout << symbol << setw(number-1) << symbol << endl;
		counter--;
	}
	while (counts > 0)
	{
		cout << symbol;
		counts--;
	}
	cout << endl;
	
	cout << "Enter a new symbol. Then a new number." << endl;		// Instructions to loop
