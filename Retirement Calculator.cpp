#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	int age,retire_age,retire_year,years_left,year;
//..................Input validation...........................
	cout<<"Enter your age ...... ";
		while(!(cin >> age)||(age<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
	cout<<"Enter the age you would like to retire .. ";
		while(!(cin >> retire_age)||(retire_age<=0))
		{
		// Explain error
	    cout << "ERROR: a number(positive) must be entered: ";
	    // Clear input stream
	    cin.clear();
	    // Discard previous input upto next line
	    cin.ignore(123, '\n');
		}
//....................!!!!Processing!!!!...............................
	years_left=retire_age-age;	
	//Finding current year.
	//time_t is a an object, now is name of object, receives time in seconds
    time_t now = time(0);
    //tm is an object, 
	//*l is a pointer pointing to the value of localtime and has the time as an argument
    tm *local = localtime(&now);
    year=1900 + local ->tm_year;//Current year
//....................!!!!PROMPTING!!!!................................
	if(years_left<0)//negative value is returned
	{
	years_left=years_left*(-1);//Amount of age exceded	
	cout<<" You have exceded your retirement age age by "<<years_left<<" years , you can retire if you want";
	}
	else
	{
	cout<<"You have "<<years_left<<" until your retirment"<<endl;
	cout << "It is " <<year<< " so you can retire in "<< years_left + year<<endl; 	 
	}
}

