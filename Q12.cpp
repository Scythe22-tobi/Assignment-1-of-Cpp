#include<iostream>
using namespace std;
int main()
{
	/*Q12.Scan radius of a circle from user.Find area and circumference of circle.
	If area of circle is greater than 50,print how much it is greater than 50.
	If area is smaller than 50,print how much it is smalller than 50.
	Print every message properly.*/
	
	float r;
	cout<<"\nEnter the radius of the circle =";
	cin>>r;
	
	float area,peri;
	
	area=3.14*r*r;
	peri=2*3.14*r;
	
	if(area>50)
	{
		cout<<"\nThe area is "<<area-50<<" greater tha 50";
	}
	else if(area<50)
	{
		cout<<"\nThe area is"<<50-area<<" lesser than 50";
	}
	else
	{
		cout<<"\nThe area is equal to 50";
	}
	
	return 0;
}
