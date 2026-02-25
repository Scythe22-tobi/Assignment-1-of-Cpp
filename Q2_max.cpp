#include<iostream>
using namespace std;
int main()
{
	//Q2.Scan 3 numbers from user.Find the largest of them.
	
	int num1,num2,num3;
	int i;
	cout<<"Enter 3 integers =";
	
	cin>>num1>>num2>>num3;
	
	int max;
	
	max=num1>num2?num1:num2;
	max=max>num3?max:num3;
	
	cout<<"\nThe largest value ="<<max;
	
	return 0;
}
