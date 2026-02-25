#include<iostream>
using namespace std;
int main()
{
	//Q20.Scan a 3 digit number from user.Print its each digit separately.
	int num;
	cout<<"\nEnter an integer =";
	cin>>num;
	int rem;
	while(num!=0)
	{
		rem=num%10;
		cout<<"\n"<<rem;
		num=num/10;
	}
	
	return 0;
}

