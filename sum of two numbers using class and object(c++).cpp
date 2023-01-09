#include<iostream>
using namespace std;
class sum
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"enter x and y value: ";
			cin>>x>>y;
			cout<<"sum of 2 number is: "<<x+y;
		 } 
};
int main()
{
	sum a;
	a.getdata();
}
