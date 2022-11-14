#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float n;
	cout<<"Enter a flot value : ";
	cin>>n;
	while(n>=0)
		{
		cout<<n<<"\n";
		n=n-0.5;
		}
	return 0;	
}
