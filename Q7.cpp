#include<iostream>
using namespace std;
int main()
{
	//Q7.Scan a character from user.Print "APPLE" if user enters a or A.Otherwise print message
	//"NO APPLE".
	
	char ch;
	cout<<"\nEnter a Character =";
	cin>>ch;
	
	if(ch=='a' || ch=='A')
	{
		cout<<"\nApple";
	}
	else
	{
		cout<<"\nNo Apple";
	}
	
	return 0;
}
