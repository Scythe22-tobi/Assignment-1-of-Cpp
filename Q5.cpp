#include<iostream>
using namespace std;
int main()
{
	//Q5.Scan a number from user.Check if it is even or odd
	int num;
	cout<<"\nEnter a number=";
	cin>>num;
	
	if(num%2==0)
	{
		cout<<"\nEven number";
	}
	else
	{
		cout<<"\nOdd number";
	}
	
	return 0;
}
