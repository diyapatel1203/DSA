#include<iostream>

using namespace std;

//WAP TO CHECK NUMBER IS NEGATIVE, POSITIVE, OR NEUTRAL.
int main()
{
	int num;
	
	cout << "Enater Number:";
	cin >> num;
	
	if(num>0)
	{
		cout << num << " " << "is a Positive Number";
	}
	else if(num==0)
	{
		cout << num << " " << "is a Neutral Number";
	}
	else
	{
		cout << num << " " << "is a Nagative Number";
	}
	
	return 0;
}