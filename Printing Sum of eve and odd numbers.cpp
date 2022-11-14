#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,n,sumo,sume;
	cout<<"Enter a numbr : ";
	cin>>i;
	if(i>>0)
	{
		sumo=0,sume=0;
		cout<<"Even number greater then equal to "<<i<<" are : "<<endl;
		for(n=1;n<=i;n++)
		{
		if(n%2==0)
			{
			cout<<n<<"\t";
			sumo=sumo+n;
			}			
		}
		cout<<"\nOdd number greater then equal to "<<i<<" are : "<<endl;
		for(n=1;n<=i;n++)
		{
		if(n%2!=0)
			{
			cout<<n<<"\t";
			sume=sume+n;
			}			
		}
		cout<<"\n\nSum of Odd numers is "<<sumo;
		cout<<"\nSum of Even numbers is "<<sume;
	}
		else
		{
		cout<<"Enter a positive number";
		}
}
