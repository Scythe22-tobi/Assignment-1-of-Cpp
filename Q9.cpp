#include<iostream>
using namespace std;
int main()
{
	/*Q9.Scan 2 integers from user.Then scan a choice also from user.
	If user enters 1 as a choice,print addition of first 2 integers.
	Otherwise print subtraction of 2 integers.*/
	
	int num1,num2;
	cout<<"\nEnter 2 integers =";
	cin>>num1>>num2;
	
	int choice;
	cout<<"\nEnter 1 to add the numbers or else other to subtract=";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\nAddition = "<<num1+num2;
			break;
		
		default :
			cout<<"\nSubtraction = "<<num1-num2;
				
	}
	
	return 0;
}
