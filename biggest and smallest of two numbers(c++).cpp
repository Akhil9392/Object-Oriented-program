#include<iostream>
using namespace std;
int main()
{
	int exp,a,b;
	cout<<"enter a,b:";
	cin>>exp>>a>>b; 
	switch(exp)
	{
		case 1:
		if(a>b)
		cout<<a<<"is the biggest";
		else
		cout<<b<<"is the biggest";
		break;
		case 2:
		if(a<b)
		cout<<a<<"is the smallest";
		else
		cout<<b<<"is the smallest";
		break;
		default:
		cout<<"plz select correct one";
		break;
	}
}
