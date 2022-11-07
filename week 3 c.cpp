#include<iostream>
#include<cmath>
using namespace std;	
int main()
{
	int score;
	cout<<"Enter your percentage; ";
	cin>>score;
	switch(score) 
	{
		case 85 ... 100:
		cout<<"\nGrade is A";
		break;
	
		case 72 ... 84:
		cout<<"\nGrade is B";
		break;

		case 60 ... 71:
		cout<<"\nGrade is C";
		break;
	
		case 50 ... 59:
		cout<<"\nGrade is d";
		break;
		
		default:
		cout<<"\m Your frade is F";
	}
}
