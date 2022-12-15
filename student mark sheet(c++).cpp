#include<iostream>
using namespace std;
int main()
{
	float java,c,math,python,total,avg,grade;
	cout<<"AKHI1 COLLEGE"<<endl;
	cout<<"STUDENT MARK SHEET"<<endl;
	cout<<"Reg number: 192110220"<<endl;
	cout<<"Student Name: AKHIL KUMAR"<<endl; 
	cout<<"obtained marks in java:";
	cin>>java;
	cout<<"obtained marks in c:";
	cin>>c;
	cout<<"obtained marks in math:"; 
	cin>>math;
	cout<<"obtained marks in python:";
	cin>>python;
	total=java+c+math+python;
	cout<<"total:"<<total<<endl;
	avg=total/4;
	cout<<"avg:"<<avg<<endl; 
	if(avg>90)
	cout<<"grade:S";
	else if (81<=avg&&avg<=90)
	cout<<"grade: A"; 
	else if(71<=avg&&avg<=80)
	cout<<"grade: B";
	else if (61<=avg&&avg<=70)
	cout<<"grade:C";
	else
	cout<<"grade: E";
}
