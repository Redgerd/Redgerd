#include<iostream>
using namespace std;
int main()
{
	//Input
	int people,pizzas,slices;
	cout<<"How many people? ";
		while(!(cin >> people)||(people<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	cout<<"How many pizzas do you have? ";
		while(!(cin >> pizzas)||(pizzas<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	cout<<"Enter the amount of slices in the pizzas: ";
		while(!(cin >> slices)||(slices<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	cout<<people<<" people with "<<pizzas<<" pizzas";
	//processing
	int slices_perp,leftover;
	slices_perp=(slices*pizzas)/people;
	leftover=(pizzas*slices)%people;
	cout<<"\nEach person gets "<<slices_perp<<" pieces of pizza.\nThere are "<<leftover<<" leftovers.";
}
	
