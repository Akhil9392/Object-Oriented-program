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
		cout<<"addition:"<<a+b;
		break;
		case 2:
		cout<<"substraction:"<<a-b;
		break;
		case 3:
		cout<<"multiplication:"<<a*b;
		break;
		case 4:
		cout<<"division:"<<a/b;
		break;
		case 5:
		cout<<"modules:"<<a%b;
		break;
		default:
		cout<<"plz select correct one:";
		break;
	}
}
