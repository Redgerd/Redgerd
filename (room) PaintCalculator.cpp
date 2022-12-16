#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char room;
	//Asking Shape of the room
	cout<<"What is the shape od the room (s/r/l) ... ";
		while(!(cin >> room))
		{
		// Explain error
	    cout << "ERROR: a one of the given shapes must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	//Applying sollution for each shape
	switch(room)
	{
case 's'://For Rectanular Room
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
	break;
}
case 'l'://For L-Shape Room
{
	float l,w; 	
	cout<<"Enter lenth of celling according to longer wall   ...... ";
		while(!(cin >> l)||(l<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	cout<<"Enter the width of celling according to longer wall   .. ";
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
	break;	
}
case 'r':
{
	float r; 	
	cout<<"Enter Radius of celling  ...... ";
		while(!(cin >> r)||(r<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	float paint;
	paint=(3.14*(r*r))/350;
	paint=ceil(paint);
	cout<<"You will need to purchase "<<paint<<" gallons of paint to cover "<<(3.14*(r*r))<<" square feet.";
	break;	
}
}
}
		
