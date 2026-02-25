#include<iostream>
using namespace std;
int main()
{
	/*Q13.A customer has deposited P Rs in bank in the form of Fixed Deposit for N years
	having rate of interest 5.00%.(Here P ad N is the input from user).
	Find the total amount he will get after N years.If total amount he will receive 
	is greater than 12000/-,then suggest himto invest them in mutual fund 
	else suggest him to buy the gold.*/
	
	int deposit,yr;
	int total_amt;
	cout<<"\nEnter the deposited money in bank =";
	cin>>deposit;
	cout<<"\nFor how many years =";
	cin>>yr;
	total_amt=(deposit*5/100) * yr;
	
	cout<<"\nThe amount "<<deposit<<" will increase by "<<total_amt<<"/- Rs";
	
	if(total_amt>12000)
	{
		cout<<"\nYou should invest in Mutual Funds for more profits";
	}
	else
	{
		cout<<"\nYou should buy gold as an invesment";
	}
	
	return 0;
}
