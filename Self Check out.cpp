#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int item_no;
	float total=0,tax;
	cout<<"How many Items are there ? ";
		while(!(cin >> item_no)||(item_no<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	//loop for info of each item
	for(int price,quantity,item=1;item<=item_no;item++)
	{
		cout<<"Enter the price of item number "<<item<<" : $ ";
		while(!(cin >> price)||(price<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
			cout<<"Enter the Quantity of item number "<<item<<" : ";
		while(!(cin >> quantity)||(quantity<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}	
		total=total+(price*quantity);
	}
	cout<<"Subtotal = "<<total;
	//Calculating tax of 5.5%
	tax=(5.5/100)*total;
	cout<<"\ntax = $"<<tax;
	//Calculateing Total amount
	total=total+tax;
	cout<<"\nTotal = "<<total;
}
