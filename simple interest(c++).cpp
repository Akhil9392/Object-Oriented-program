#include<iostream>
using namespace std;
int main()
{
	float p,t,i,si;
	cout<<"enter the amount: ";
	cin>>p;
	cout<<"enter the time period: ";
	cin>>t;
	cout<<"enter the interest rate: ";
	cin>>i;
	si=p*t*i/100;
	cout<<"\n"<<"simple interest is:"<<si;
}
