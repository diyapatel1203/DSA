#include<iostream>

using namespace std;

int main()
{
	int a,b,c,d;
	
	cout << "Enter a:";
	cin >> a;
	cout << "Enter b:";
	cin >> b;
	cout << "Enter c:";
	cin >> c;
	cout << "Enter d:";
	cin >> d;
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				cout << "a is maximum";
			}
			else
			{
				cout << "d is maximum";
			}
		}
		else
		{
			if(c>d)
			{
				cout << "c is maximum";
			}
			else
			{
				cout << "d is maximum";
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				cout << "b is maximum";
			}
			else
			{
				cout << "d is maximum";
			}
		}
		else
		{
			if(c>d)
			{
				cout << "c is maximum";
			}
			else
			{
				cout << "d is maximum";
			}
		}
	}
	
	return 0;
}