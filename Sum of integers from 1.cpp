#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int val,sum;
	cout<<"Enter a numbr : ";
	cin>>val;
	sum=0;	
	for(int n=val;n>0;n--)
		{
		sum=sum+n;	
		}
	cout<<"Sum of integers from 1 to "<<val<<" is : "<<sum;
}
