#include<iostream>
#include<cmath>
using namespace std;	
int main()
{
	float cost,down,rem,month;
	cout<<"Entr the vehicals price in rupees ";
	cin>>cost;
	cout<<"Entr the vehicals pdown payment in rupees ";
	cin>>down;
	rem=cost-down;
	cout<<"how many months do you want to lease the car ";
	cin>>month;
	if(month<=12)
		{
			cout<<"Monthly Installment = "<<((rem+(rem*0.1))/month);
		}
	else if((month>12)&&(month<=24))	
		{
			cout<<"Monthly Installment = "<<((rem+(rem*0.15))/month);
		}
	else if((month>24)&&(month<=36))	
		{
			cout<<"Monthly Installment = "<<((rem+(rem*0.2))/month);
		}
	else if((month>36)&&(month<=48))	
		{
			cout<<"Monthly Installment = "<<((rem+(rem*0.25))/100);
		}	
	else if((month>46)&&(month<=60))	
		{
			cout<<"Monthly Installment = "<<((rem+(rem*0.3))/100);
		}
}
