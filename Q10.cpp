#include<iostream>
using namespace std;
int main()
{
	//Q10.Scan a character from user.Check if it is digit or not.
	
	char ch;
	cout<<"\nEnter character =";
	cin>>ch;
	
	if(ch>='0'&&ch<='9')
	{
		cout<<"\nIt is digit";
	}
	else
	{
		cout<<"\nNot a digit";
	}
	
	return 0;
}
