#include<iostream>
using namespace std;

//without third variable
int main(){
	
	int num1=10;
	int num2=20;
	
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	
	cout << num1 << endl;
	cout << num2 << endl;
	
	return 0;
}