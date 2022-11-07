#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cout<<"Enter a Number: ";
	cin>>a;
	b=a,c=a,d=a,e=a,f=a;
	a++,a++,a++,a++,a++;
	cout<<b<<" + 5 = "<<a<<endl;
	c--,c--,c--;
	cout<<b<<" - 3 = "<<c<<endl;
	d++,d++,d++;
	d--,d--;
	cout<<"("<<b<<" + 3 ) - 2 = "<<d<<endl;
	d++,d++,d++,d++,d++;
	d=d*2;
	f++,f++,f++;
	cout<<"( ( "<<b<<" + 5) * 2 / ( "<<b<<" + 3 )) = "<<d/f;
}
