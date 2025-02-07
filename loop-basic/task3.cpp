#include<iostream>
using namespace std;

//wap to print leap years between 2000 to 3000.
int main()
{
	int year=2000;
	while(year<=3000)
	{
		cout << year << " ";
		year+=4;	
	}
	
	return 0;
}