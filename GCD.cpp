#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n1,n2,gcd=2;
	cout<<"Enter 1st numbr : ";
	cin>>n1;
	cout<<endl;
	cout<<"Enter 2nd numbr : ";
	cin>>n2;
	cout<<endl;
	while(gcd<n1&&gcd<n2,gcd++)
	 	{
	 		if (n1%gcd==0&&n2%gcd==0)
			{cout<<"GCD = "<<gcd;}
		}
	return 0;	
}
		
	
