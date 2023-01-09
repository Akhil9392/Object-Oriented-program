#include<iostream>
#include<cmath>
using namespace std;
class intrest
{
	int p,n,r,si,ci;
	public:
		void getdata()
		{
			cout<<"enter the total amount: ";
			cin>>p;
			cout<<"enter the no of years: ";
			cin>>n;
			cout<<"enter the rate of intrest: ";
			cin>>r;
			si=p*n*r/100;
			ci=p*(pow((1+r/100),n));
			cout<<si<<"is your simple intrest"<<endl;
			cout<<ci<<"is your compound intrest";
		} 
};
int main()
{
	intrest a;
	a.getdata();
}
