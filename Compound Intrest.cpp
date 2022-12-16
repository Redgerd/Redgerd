#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float p,r,A;
	int t,n;
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
	cout<<"Enter the number intrest compound per year : ";
		while(!(cin >> n)||(n<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	int store_power;
	float store_value;
	store_power=n*t;
	store_value=1+(r/n);
	A=p*(pow(store_value,store_power));
	ceil(A);
	cout<<p<<" invested at "<<r<<" % for "<<t<<" years"<<"\ncompounded "<<n<<" times per year is $"<<A;
	;}	
