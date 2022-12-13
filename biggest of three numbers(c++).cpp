#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter three numbers:";
	cin>>a>>b>>c;
	if(a>b>c)
	cout<<a<<"is the biggest number";
	else if(b>c>a)
	cout<<b<<"is the biggest number";
	else
	cout<<c<<"is the biggest number";
}
