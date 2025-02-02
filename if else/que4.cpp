#include<iostream>

using namespace std;

//WAP TO PRINT GRADES OF STUDENT BASED ON THEIR PERCENTAGE.

int main()
{
	int percentage;
	
	cout << "Enter Student's Percentage:";
	cin >> percentage;
	
	if(percentage<=100 && percentage>=90)
	{
		cout << "Your Grade is A";
	}
	else if(percentage<90 && percentage>=80)
	{
		cout << "Your Grade is B";
	}
	else if(percentage<80 && percentage>=70)
	{
		cout << "Your Grade is C";
	}
	else if(percentage<70 && percentage>=60)
	{
		cout << "Your Grade is D";
	}
	else if(percentage<60 && percentage>=50)
	{
		cout << "Your Grade is E";
	}
	else
	{
		cout << "Fail";
	}
	
	
	return 0;
}