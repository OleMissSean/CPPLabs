/* 
Sean Staz
CSC 2134
Program countUC
Program countUC counts the number of uppercase letterson a line.
*/

#include <iostream>
#include <string>

using namespace std;

int main ()
{  
  string letter; 		// Defines variable letter
  int  letterCt; 		// Defines variable letterCt (amount of capital letters)
  string userInput;		// Defines variable userInput
  int count;			// Defines count
  
  letterCt = 0; // Starts amount of capital letters at 0
  count = 0;	// Starts count at 0
  
  cout << "Enter a combination of letters lowercase and/or lowercase." << endl; // User instructions
  
  getline(cin, userInput);	// Inputs userInput
  
	while (count <= userInput.length()) // Sets loop to do whole string
	{
		letter = userInput.substr(count,1); // Does the first letter of string
		
		if (letter >= "A" && letter <= "Z") // This finds capital letters
		{
			letterCt++; // If a capital letter is found this adds one to letterCt
			count++;		// Adds 1 to the count
		}
		
		else 
		if (letter >= "a" && letter <= "z")
		{
			count++; // Adds 1 to the count
		}
		else
		count = count + 1000; // If a char other than a letter is input, than the loop will terminate
		
		
	}
	
	cout << "Amount of uppercase letters " << letterCt << endl; // Outputs amount of uppercase letters in the string
	
  return 0;
}
