#include<iostream> 
using namespace std;
int main()
{
	int units,a;
	cout<<"enter the units:"; 
	cin>>a>>units;
	switch(a)
	{
		case 1:
			if(units<=100)
			cout<<"PRICE:"<<units*0;
			else if(101<=units&&units<=200)
			cout<<"PRICE:"<<units*1.00;
			else if (101-units&&units<-300)
			cout<<"PRICE:"<<units*1.75;
			else
			cout<<"PRICE:"<<units*5.00;
			break;
		case 2:
		    if (units<=100)
		    cout<<"PRICE: "<<units*1.00; 
		    else if (101<=units&&units<=200)
		    cout<<"PRICE:"<<units*3.00;
		    else if(201<=units&&units<=300)
		    cout<<"PRICE:"<<units*5.00;
		    else
		    cout<<"PRICE:"<<units*7.00;
		    break;
		default:
		cout<<"plz select correct one"; 
		break;
    }
}
