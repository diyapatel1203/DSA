#include<iostream>
using namespace std;

// with third variable
int main(){
	
	int num1=10;
	int num2=20;
	
	int temp=num1;
	
	num1=num2;
	num2=temp;
	
	cout << num1 << endl;
	cout << num2 << endl;
	
	return 0;
}