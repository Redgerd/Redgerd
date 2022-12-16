#include<iostream>
using namespace std;
int main()
{
	int TargetHeartRate,age, restingHR, intensity;
	cout<<"Enter your age ... ";
    cin>>age;
    cout<<"Enter resting Pulse ... ";
    cin>>restingHR;
    cout<<"Intensity           |  Rate"<<endl;
    cout<<"_ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
    for(intensity=55;intensity<=95;intensity=intensity+5)
    {
        TargetHeartRate=(220-age-restingHR)*intensity/100+restingHR;
        cout<<intensity<<"%\t   |"<<TargetHeartRate<<"bpm";
        cout<<endl;
    }
}
    
    
