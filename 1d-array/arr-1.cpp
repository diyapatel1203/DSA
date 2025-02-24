#include<iostream>
using namespace std;

int main(){
	
	int n;
	cout << "Enter n : ";
	cin >> n;
	
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
	 	cout << "Enter the arr[" << i << "] : ";
		cin >> arr[i];
	}

	cout << endl;
	
	 for(int i=0;i<n;i++)
	 {
	 	cout << arr[i] << endl;
	 }
	 
	
	return 0;
}