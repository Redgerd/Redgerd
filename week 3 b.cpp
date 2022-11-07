#include<iostream>
#include<cmath>
using namespace std;	
int main()
{
	int n1,n2,n3,n4,n5;
	cout<<"enter firsr number: ";
	cin>>n1;
	cout<<"\nenter secind number: ";
	cin>>n2;
	cout<<"\nenter third number: ";
	cin>>n3;
	cout<<"\nenter forth number: ";
	cin>>n4;
	cout<<"\nenter fifth number: ";
	cin>>n5;
	if((n1>n2)&&(n1>n3)&&(n1>n4)&&(n1>n5))
		{
			cout<<"the largest of the five number is "<<n1;
		}
	else if((n2>n1)&&(n2>n3)&&(n2>n4)&&(n2>n5))
		{
			cout<<"the largest of the five number is "<<n2;
		}	
	else if((n3>n1)&&(n3>n2)&&(n3>n4)&&(n3>n5))
		{
			cout<<"the largest of the five number is "<<n3;
		}
	else if((n4>n1)&&(n4>n2)&&(n4>n3)&&(n4>n5))
		{
			cout<<"the largest of the five number is "<<n4;
		}
	else
		{
			cout<<"the largest of the five number is "<<n5;
		}
}
