#include<cmath>
#include<iomanip>
#include<unistd.h>
#include<iostream>>
using namespace std;
int main ()
{
for (int a=1;a<13;a++)
{
	for( int b=1;b<13;b++)
	{
		cout<<setw(3)<<setfill('0')<<a*b<<" ";
	}
	cout<<endl;
}
}
