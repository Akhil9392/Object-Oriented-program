#include<iostream>
using namespace std;
int main()
{
	int salary;
	cout<<"enter your annual salary:";
	cin>>salary;
	if(salary>0&&salary<250000)
	cout<<0<<"is the amount of tax you have to pay";
	else if(salary>250001&&salary<500000)
	cout<<salary*5/100<<"is the amount of tax you have to pay";
	else if(salary>500001&&salary<1000000)
	cout<<salary*10/100<<"is the amount of tax you have to pay";
	else
	cout<<salary*15/100<<"is the amount of tax you have to pay";
}
