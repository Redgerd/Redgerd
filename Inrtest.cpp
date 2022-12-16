#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float i,p,r;
	int t;
	cout<<"Enter the principal: ";
		while(!(cin >> p)||(p<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(1234, '\n');
		}
	cout<<"Enter the rate of interest: ";
		while(!(cin >> r)||(r<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	cout<<"Enter the number of years: ";
		while(!(cin >> t)||(t<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	r=r/100;
	i=p*(1+(r*t));
	cout<<"After "<<t<<" years at "<<r<<"%, the investment will be worth $"<<i;
}
