#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int N,n,f=1;
	cout<<"Enter any value : ";
	cin>>n;
	N=n;
		do
		{
		f=f*n;
		n=n-1;
		}
		while(n>=1);
		cout<<"\nFactotial of "<<N<<" is "<<f;
	return 0;
}
