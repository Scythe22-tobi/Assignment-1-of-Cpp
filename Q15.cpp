#include<iostream>
using namespace std;
int main()
{
	//Q15.Scan length and width of a rectangle from user.Check if it is square or rectangle.
	
	int length,width;
	
	cout<<"\nEnter the length and width of the rectangle =";
	cin>>length>>width;
	
	if(length==width)
	{
		cout<<"\nSquare";
	}
	else
	{
		cout<<"\nRectangle";
	}
	
	return 0;
}
