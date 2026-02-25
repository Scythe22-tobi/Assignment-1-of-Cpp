#include<iostream>
using namespace std;
int main()
{
	//Q4.Scan a number from user.Print message correct input if numer lies between 15 and 20.
	int num;
	cout<<"\nEnter a number=";
	cin>>num;
	
	if(num>=15 && num<=20)
	{
		cout<<"\nIn range";
	}
	else
	{
		cout<<"Out of Range";
	}
	
	return 0;
}
