#include<iostream>
using namespace std;
int main()
{
	int r,year;
	bool check=true;
	cout<<"Enter a rate of return ... ";
	while(check=true)
	{
	while(!(cin >> r)||(r<0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	if(r==0)
	{
		cout<<"'0' can ot be entered \nEnter a positive number ";
	}
	else break;
	}
	year=72/r;
	cout<<"It will take "<<year<<" years to double your initial investment";
}

