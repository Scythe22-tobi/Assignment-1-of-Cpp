#include<iostream>
using namespace std;
int main()
{
	//Q8.Scan a character from user.Check if it is capital alphabet or not.
	
	char ch;
	cout<<"\nEnter a character=";
	cin>>ch;
	
	if(ch>='A' && ch<='Z')
	{
		cout<<"\nCapital Alphabet";
	}
	else
	{
		cout<<"\nNot Capital Alphabet";
	}
	
	return 0;
}
