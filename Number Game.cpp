#include<iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
int main()
{
	int rnum,num;
	int difficulty;
	char play='y';
cout<<"Lets Play Guess the number !";
do//Infinite Loop.
{
cout<<"\nSelect Difficulty (1/2/3) ... ";
cin>>difficulty;
switch(difficulty)
{
	case 1:
	{	
	cout<<"The number is between 1 and 10 ";
	//Randomizer btw 1-10
	srand(time(0));
	rnum=rand()%10;
	cout<<"I have my number. What's your guess? ";
	int i=0;
	while(num!=rnum)
	{
	cin>>num;
	if (num<rnum) {cout<<"\nToo low. Guess again   "; i++;}
	else if (num>rnum) {cout<<"\nToo High. Guess again  "; i++;}
	}
	cout<<"You got it in "<<i<<" guesses";
	break;
	}
	case 2:
	{	
	cout<<"The number is between 1 and 100 ";
	//Randomizer btw 1-100
	srand(time(0));
	rnum=rand()%100;
	cout<<"I have my number. What's your guess? ";
	int i=0;
	while(num!=rnum)
	{
	cin>>num;
	if (num<rnum) {cout<<"\nToo low. Guess again   "; i++;}
	else if (num>rnum) {cout<<"\nToo High. Guess again  "; i++;}
	}
	cout<<"You got it in "<<i<<" guesses";
	break;
	}
	case 3:
	{	
	cout<<"The number is between 1 and 1000";
	//Randomizer btw 1-1000
	srand(time(0));
	rnum=rand()%1000;
	cout<<"I have my number. What's your guess? ";
	int i=0;
	while(num!=rnum)
	{
	cin>>num;
	if (num<rnum) {cout<<"\nToo low. Guess again   "; i++;}
	else if (num>rnum) {cout<<"\nToo High. Guess again  "; i++;}
	}
	cout<<"You got it in "<<i<<" guesses"<<endl;
	break;
	}
}
cout<<"Would You Like To Play Again (y/n) ... ";
cin>>play;
}
while(play =='Y' || play =='y');
cout<<"Thank You ....";
}

