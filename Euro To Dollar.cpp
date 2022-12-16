#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float euros,ex_rate,dollars;
	cout<<"How many euros are you exchanging? ";
	cin>>euros;
	ceil(euros);
	cout<<"What is the exchange rate? ";
	cin>>ex_rate;
	dollars=(euros*ex_rate)/100;
	ceil(dollars);
	cout<<euros<<" euros at an exchange rate of "<<ex_rate<<" is "<<dollars<<" U.S. dollars";
}
		
