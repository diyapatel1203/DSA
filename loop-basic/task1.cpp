#include<iostream>
using namespace std;


//wap to print 1 to n using the while/for a loop.
int main()
{
	int n;
	cout << "Enter n :";
	cin >> n;
	
	int i=1;
	while(i<=n)
	{
		cout << i << endl;
		i++;
	}
	
	return 0;
}