#include<iostream>
using namespace std;
int main()
{
	/*Q16.Scan marks of 4 subjects of a student.If average of 4 subjects is greater than 75,
	print message DISTINCTION,else print message "STUDY MORE".*/
	
	int sub1,sub2,sub3,sub4;
	cout<<"\nEnter the marks of 4 subjects=";
	cin>>sub1>>sub2>>sub3>>sub4;
	
	if((sub1+sub2+sub3+sub4)/4 >= 75)
	{
		cout<<"\nDistinction";
	}
	else
	{
		cout<<"\nStudy More";
	}
	
	return 0;
}
