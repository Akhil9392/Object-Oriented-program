#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age:";
	cin>>age;
	if(age>18)
	cout<<"your are eligible for vote";
	else
	cout<<"your are not eligible for vote"<<"\n"<<18-age<<"year left to eligible for vote";
}
