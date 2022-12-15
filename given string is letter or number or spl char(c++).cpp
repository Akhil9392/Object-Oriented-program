#include<iostream>
using namespace std;
int main()
{
	char x;
	cout<<"enter the value:";
	cin>>x;
	if(x>='a'&&x<='z'||x>='a'&&x>='Z')
	cout<<x<<":is an letter";
	else if (x>='0'&& x<='9')
	cout<<x<<":is a number";
	else
	cout<<x<<":spl char";
}
