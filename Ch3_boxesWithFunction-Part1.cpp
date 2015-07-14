// Program boxesWithFunction prompts for the number of dollar signs 
// for the top of the box.  That number / 2 - 2  lines are 
// printed with dollar signs on the sides.        

#include <iostream>
#include <iomanip>
using namespace std;

void  Print(int number);

int main ()
{
  int  number;

  cout << "Enter the number of dollar signs for the top; "
       << "press return.";
  cout << "Enter end-of-file character to quit."  << endl;
  cin >> number;
  while (cin)
  {    
   Print(number);
    cout << "Enter the number of dollar signs for " 
         << "the top; press return.";
    cout << "Enter end-of-file character to quit."
         << endl;
    cin >> number;
  }
  return 0;
}
 
//*******************************************************  
  
void  Print(int number)
{
  
  float count;
  float counts;
  float counter;
  count = number;
  counts = number;
  counter = number/2-2;
  
  while (count > 0)
  	{
	  cout << "$";
	  count--; 
	  cout << endl;
  	}
	while (counts > 0)
	{
		cout << "$" << setw(number-1) << "$" << endl;
		counts--;
		cout << endl;
	}
	while (counter > 0)
	{
		cout << "$";
		counter--;
		cout << endl;
	}
}
