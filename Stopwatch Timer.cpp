#include<iostream>
#include<cmath>
#include<iomanip>
#include<unistd.h>
using namespace std;
int main ()
{
	int h,m,s;
	for(h=1;h<=10;h++)
		{
			for(m=0;m<=60;m++)
				{	
					for(s=0;s<=60;s++)
						{
							cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s<<endl;
							sleep(1);
						}
				}
		}
}
