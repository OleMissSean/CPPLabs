/*
Sean Staz
CSC 2134
Calories
Program calories calculates the percentage of calories that come from fat and tells the user if the food 
item is Heart Healthy or not.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
  string foodItem;  // Food item 
  float   gramsOfFat;  // Grams of fat in food item
  float   calories;  // # of calories in food item
  float fatCalPercent;  // The percentage of calories that come from fat
  int 	limit; // Defines variable limit
  int counter; // Defines variable counter
  
  counter = 0; // Starts counter at 0

	while (counter <= 4) // Runs the loop 4 times
	{
	
	// Ask the user to input food item, grams of fat and amount of calories.
	// Output their inputs and fill variables with info
	
 	 cout << "Enter the name of a food item." <<endl;
 	 cin >> foodItem;

 	 cout << "Enter the grams of fat; press return."  << endl;
 	 cin >> gramsOfFat;

 	 cout << "Enter the number of calories; press return."
       << endl;
 	 cin >> calories;
  
  	// Calculate the percentage of calories that come from fat
  
 	  fatCalPercent = ((gramsOfFat * 9) / calories) * 100;
 	  
	

  
  // Outputs the results 
  
  cout << endl << "Percent of calories that come from fat for " << foodItem
  	   << " is " << fatCalPercent << endl;
  	   
  	// Output whether or not the item is Heart Healthy
  	   
  if (fatCalPercent > 30)
  {
    cout << endl << "This item is NOT Heart Healthy!!" << endl << endl << endl;
  }
  else
  {
  	cout << "This item is Heart Healthy!" << endl << endl << endl;
  }
  
  		counter++; // Adds 1 to the counter each time
 	}
  return 0;
}
