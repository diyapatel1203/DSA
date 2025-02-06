#include<iostream>
using namespace std;

int main()
{
	
	int age;
	cout << "Enter age:";
	cin >> age;
	
	
	if(age>=18)
	{
		if(age>100)
		{
			cout << "You can't set age greater than 100 !";
		}
		else
		{
			cout << "You are eligible for vote ";
		}
	}
	else
	{
		if(age<=0)
		{
			if(age==0)
			{
				cout << "Zero Can't allowed as age";
			}
			else
			{
				cout << "Nagative value Can't allowed as age";
			}
		}
		else
		{
			cout << "You are not eligible for vote";
		}
	}
	
	return 0;
}