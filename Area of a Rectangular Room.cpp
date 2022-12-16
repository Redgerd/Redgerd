#include<iostream>
using namespace std;
int main()
{
	//Type of input controal
	char input_type;
	cout<<"Choose feet or meters for your inputs (f/m) ... ";
	cin>>input_type;
	//Input Valadation & Prompt
	float l,w; 	
	cout<<"Enter lenth of room  ...... ";
		while(!(cin >> l)||(l<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	cout<<"Enter the width of room  .. ";
		while(!(cin >> w)||(w<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	//Processing accoeding to feet or meters
	switch (input_type)
	{
	case 'f'://feet
		{
	cout<<"You entered dimensions of "<<l<<" feet by "<<w<<" feet.";
	//Processing
	float area_feet,area_sq;
	area_feet=l*w;
	area_sq=area_feet/(10.764);
	cout<<"\nThe area is"<<endl;
	cout<<area_feet<<" square feets"<<endl;
	cout<<area_sq<<" square meters";
	break;
		}
		case 'm'://feet
		{
	cout<<"You entered dimensions of "<<l<<" meters by "<<w<<" meters.";
	//Processing
	float area_feet,area_sq;
	area_sq=l*w;
	area_feet=area_sq*(10.764);
	cout<<"\nThe area is"<<endl;
	cout<<area_feet<<" square feets"<<endl;
	cout<<area_sq<<" square meters";
	break;	
		}
	}
}
