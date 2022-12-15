#include<iostream>
using namespace std;
int main()
{
	float unit1,unit2,units; 
	cout<<"AKHI ELECTRIC COPR LTD"<<endl;
	cout<<"KADAPA"<<endl;
	cout<<"number: 192110220"<<endl;
	cout<<"Name: AKHIL KUMAR"<<endl;
	cout<<"THIS MONTH UNITS:";
	cin>>unit1;
	cout<<"LAST MONTH UNITS:";
	cin>>unit2;
	units=unit1-unit2; 
	cout<<"UNITS:"<<units<<endl;
	if(units<=100)
	cout<<"PRICE:"<<units*0;
	else if (101<=units&&units<=200) 
	cout<<"PRICE:"<<units*1.00;
	else if (201<=units&&units<=300)
	cout<<"PRICE:"<<units*1.75; 
	else if (381<=units&&units<-500)
	cout<<"PRICE:"<<units*2.50; 
	else
	cout<<"PRICE:"<<units*5.00;
}

