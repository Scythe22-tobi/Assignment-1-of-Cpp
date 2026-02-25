#include<iostream>
using namespace std;
int main()
{
	//Q19.Scan 3 integers from user.Find the smallest of those 3 integers.
	
	int num1,num2,num3;
	
	int min;
	
	cout<<"\nEnter 3 integers =";
	cin>>num1>>num2>>num3;
	
	min=num1<num2?num1:num2;
	min=min<num3?min:num3;
	
	cout<<"\nThe smallest integer = "<<min;
	
	return 0;
}
