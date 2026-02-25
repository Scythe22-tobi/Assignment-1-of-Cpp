#include<iostream>
using namespace std;
int main()
{
	//Q6.Scan a number from user.Check if it is multiple of 6 or not without using 6.
	int num;
	cout<<"\nEnter a number=";
	cin>>num;
	
	if(num%2==0 && num%3==0)
	{
		cout<<"\nMultiple of 6";
	}
	else
	{
		cout<<"Not a multiple of 6";
	}
	
	return 0;
}
