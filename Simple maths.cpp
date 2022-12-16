#include<iostream>
using namespace std;
//Using Functions to calculate operations
int sum(int n1,int n2)
{
	int sum;
	sum=n1+n2;
	return sum;
}
int diff(int n1,int n2)
{
	int diff;
	diff=n1-n2;
	return diff;
}
int prod(int n1,int n2)
{
	int prod;
	prod=n1*n2;
	return prod;
}
float div(float n1,float n2)
{
	float div;
	div=n1/n2;
	return div;
}
int main()
{
	int n1,n2;
	//Input validation
	cout<<"Enter the first number ... ";
		while(!(cin >> n1)||(n2<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	cout<<"Enter the second number .. ";
		while(!(cin >> n2)||(n2<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}	
	//Processsing	
	cout<<n1<<" + "<<n2<<" = "<<sum(n1,n2)<<endl;
	cout<<n1<<" - "<<n2<<" = "<<diff(n1,n2)<<endl;
	cout<<n1<<" * "<<n2<<" = "<<prod(n1,n2)<<endl;
	cout<<n1<<" / "<<n2<<" = "<<div(n1,n2)<<endl;
	
}
