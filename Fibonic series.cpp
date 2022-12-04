#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter 1st number : ";
	cin>>a;
	cout<<0<<" "<<1<<" ";
	for(int n1=0,n2=1,sum,counter=1;counter<a-1;counter++)
	{
		sum=n1+n2;
		cout<<sum<<" ";
		n1=n2;
		n2=sum;
	}
}

