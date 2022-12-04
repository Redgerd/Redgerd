#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char ch;
	cout<<"Enter arthemetic Expression to be evaluated:"<<endl;
	cin>>i;
	cout<<endl;
	cin>>ch;
	cout<<endl;
	cin>>j;
	cout<<endl;
	if(ch=='+')
	cout<<i<<" "<<ch<<" "<<j<<" = "<<i+j;
	else if(ch=='-')
	cout<<i<<" "<<ch<<" "<<j<<" = "<<i-j;
	else if(ch=='*')
	cout<<i<<" "<<ch<<" "<<j<<" = "<<i*j;
	else if(ch=='/')
	cout<<i<<" "<<ch<<" "<<j<<" = "<<i/j;
	else if(ch=='%')
	cout<<i<<" "<<ch<<" "<<j<<" = "<<i%j;
}


