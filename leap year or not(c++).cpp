#include<iostream>
using namespace std;
int main()
{
	int year,n;
	cout<<"enter the year:";
	cin>>year;
	n=year%4;
	if(n==0)
	cout<<year<<"is a leap year";
	else
	cout<<year<<"is not a leap year"<<"\n"<<4-n<<"year left for leap year";
}
