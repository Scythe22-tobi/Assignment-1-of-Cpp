#include<iostream>
using namespace std;
int main()
{
	/*Q14.Scan a gender from user.If user enters M , print male.
	If user enter F, print female.Otherwise print wrong input.*/
	
	char ch;
	cout<<"\nEnter M for male and F for female : ";
	cin>>ch;
	
	if(ch=='m'|| ch=='M')
	{
		cout<<"\nMale";
	}
	else if(ch=='f' || ch=='F')
	{
		cout<<"\nFemale";
	}
	else
	{
		cout<<"\nWrong Input";
	}
	
	return 0;
}
