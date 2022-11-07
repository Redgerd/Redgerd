#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
//Taking input from the user.
int a,b;
cout<<"Enter the value of a : ";
cin>>a;
cout<<"\nEnter the value of b : ";
cin>>b;
//Calculating the required expressions and displaying them on screens.
cout<<"\n(a+b)^2 = a^2 + b^2 + 2ab = "<<pow(a,2)+pow(b,2)+2*a*b<<endl;//1
cout<<"(a-b)^2 = a^2 + b^2 - 2ab = "<<pow(a,2)+pow(b,2)-2*a*b<<endl;//2

cout<<"(a+b)^3 = a^3 + 3a^2b + 3ab^2 + b^3 = "<<pow(a,3)+3*(pow(a,2))*b+3*a*(pow(b,2))+pow(b,3)<<endl;//3
cout<<"(a-b)^3 = a^3 - 3a^2b + 3ab^2 - b^3 = "<<pow(a,3)-3*(pow(a,2))*b+3*a*(pow(b,2))-pow(b,3)<<endl;//4

cout<<"a^2-b^2 =    (a+b)  (a-b)     = "<<(a+b)*(a-b)<<endl;//5

cout<<"a^3-b^3 = (a-b)^3 + 3ab(a-b)  = "<<pow(a,3)-pow(b,3)<<endl;//6
cout<<"a^3-b^3 = (a-b) (a^2+ab+b^2)  = "<<pow(a,3)-pow(b,3)<<endl;//7
 
cout<<"a^3+b^3 = (a+b) (a^2-ab+b^2)  = "<<pow(a,3)+pow(b,3)<<endl;//8
cout<<"a^3+b^3 = (a+b)^3 - 3ab(a+b)  = "<<pow(a,3)+pow(b,3)<<endl;//9
}


