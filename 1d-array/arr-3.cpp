#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Enter n : ";
	cin >> n;
	
	int sum=0;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
	 	cout << "Enter the arr[" << i << "] : ";
		cin >> arr[i];
	}

	cout << endl;
	
	 for(int i=0;i<n;i++)
	 {
	   sum =sum + arr[i];
	 }
	  cout <<"sum of all elements: " <<sum;
	
	return 0;
}