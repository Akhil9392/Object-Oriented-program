#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	i=1; 
	cout<<"enter the nth number: ";
	cin>>n;
	while(i<=n)
	{
		sum=sum+i;
		i=i+1;
	}
	cout<<"sum of n natural numbers are:"<<sum;
}
