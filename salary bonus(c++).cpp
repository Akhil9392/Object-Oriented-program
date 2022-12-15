#include<iostream>
using namespace std;
int main()
{
	int salary;
	cout<<"enter the annual salary:";
	cin>>salary;
	if(salary<10000)
	cout<<salary*5/100<<"is your bonus";
	else if(10000<=salary&&salary<=20000)
	cout<<salary*7/100<<"is your bonus";
	else if(20001<=salary&&salary<=50000)
	cout<<salary*10/100<<"is your bonus";
	else
	cout<<salary*20/100<<"is your bonus";
}
