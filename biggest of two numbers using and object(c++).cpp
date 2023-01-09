#include<iostream>
using namespace std;
class biggest
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"enter x and y value: ";
			cin>>x>>y;
			if(x>y)
			{
				cout<<x<<"is the biggest number";
			}
			else
			{
				cout<<y<<"is the biggest number";
			}
		 } 
};
int main()
{
	biggest a;
	a.getdata();
}
