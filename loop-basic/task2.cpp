#include<iostream>
using namespace std;

//wap to print only an even number from n to 1 using while/for loop.
int main()
{
	int n;
	cout << "Enter n :";
	cin >> n;
	
	int i=1;
	while(n>=i)
	{
		if(n%2==0)
		{
			cout << n << endl;
		}
		n--;
	}
	
	return 0;
}
