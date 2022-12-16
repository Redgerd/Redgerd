#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float l,w; 	
	cout<<"Enter lenth of celling  ...... ";
		while(!(cin >> l)||(l<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	cout<<"Enter the width of celling  .. ";
		while(!(cin >> w)||(w<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	float paint;
	paint=(l*w)/350;
	paint=ceil(paint);
	cout<<"You will need to purchase "<<paint<<" gallons of paint to cover "<<l*w<<" square feet.";
}
