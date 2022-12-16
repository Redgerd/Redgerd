#include<iostream>
using namespace std;
int main()
{
	float bill,tiprate;
	float tip,total;
	//Takeing inputs from user.If user does not enter a positive integer error is prompt.
	cout<<"What is the bill amount ?...... ";
	while(!(cin >> bill)||(bill<=0))
		{
	    cout << "ERROR: a number(positive) must be entered: ";
	    cin.clear();
	    cin.ignore(123, '\n');
		}
 	cout<<"\nWhat is the tiprate(%) ?...... ";
	while(!(cin >> tiprate)||(tiprate<=0))
		{
	    cout << "ERROR: a number(positive) must be entered: ";
	    cin.clear();
	    cin.ignore(123, '\n');
		}
	//Calculating Required Values.
	tip=(tiprate/100)*bill;
	total=tip+bill;
	//Prompting Output.
	cout<<"\nThe Tip is ... $"<<tip;
	cout<<"\nThe Total is ... $"<<total;
}
