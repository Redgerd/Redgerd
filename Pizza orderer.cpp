#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	//Input
	int people,total_slices,slices,leftovers;
	float pizzas;
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
	//Counter For Choices.
	for(int counter,individual=1;individual<=people;individual++)
	{
		cout<<"Person "<<individual<<" how many slices do you want ";
		while(!(cin >> counter)||(counter<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
		total_slices=total_slices+counter;
	}
	cout<<"There are 8 slices in each pizzas: Total Required Slices ... "<<total_slices<<endl;
	//Finding number of pizzas
	pizzas=(float)total_slices/8;
	pizzas=ceil(pizzas);
	//Calculating leftovers
    leftovers= (pizzas*8)-total_slices;
    //Slice for each person
	cout<<pizzas<<" full pizzas are needed to be purchase.";
	cout<<"\nThere is "<<leftovers<<" slice leftover";
}

