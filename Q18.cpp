#include<iostream>
using namespace std;
int main()
{
	//Q18.Scan salary of a person.If salary is greater than 10000, add 5% bonus in the salary.
	//Else add 8% bonus in the salary.Print final salary.
	
	int sal;
	cout<<"\nEnter your salary =";
	cin>>sal;
	
	if(sal>10000)
	{
		cout<<"\nYour incremented salary is = "<< (sal * 5/100) + sal<<"/- rs";
	}
	else
	{
		cout<<"\nYour incremented salary is = "<<(sal * 8/100) + sal<<"/- rs";
	}
	
	return 0;
}
