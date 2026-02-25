#include<iostream>
using namespace std;
int main()
{
	/*Q11.Scan length and width of a rectangle , find area and perimeter of rectangle.
	If area is greater than 100, print message "Big rectangle" else print message 
	"Small Rectangle"*/
	
	int length , width;
	
	cout<<"\nEnter the length and width of the rectangle =";
	cin>>length>>width;
	
	int area = length*width;
	int perimeter = 2*(length+width);
	
	cout<<"\nArea = "<<area<<"\nPerimeter ="<<perimeter;
	
	if(area>100)
	{
		cout<<"\nBig rectnagle";
	}
	else
	{
		cout<<"\nSmall rectangle";
	}
	
	return 0;
	
}
