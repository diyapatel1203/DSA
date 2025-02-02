#include<iostream>

using namespace std;


//WAP TO CHECK GIVEN NUMBER IS DIVISIBLE BY 7 OR NOT.
int main()
{
	int num;
	
	cout << "Enater Number:";
	cin >> num;
	
	
	if(num%7==0)
	{
		cout << num << " " << "is divisible by 7";
	}
	else
	{
		cout << num << " " << "is not divisible by 7";
	}
	
	return 0;
}