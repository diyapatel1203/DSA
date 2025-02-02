#include<iostream>

using namespace std;

//WAP TO CHECK THE VOTING ELIGIBILITY OF USER
int main(){
	
	int age;
	cout << "Enter age :";
	cin >> age;
	
	if(age<=0 || age>=100)
	{
		cout << "Enter Valid Age!...";
	}
	else if(age>=18)
	{
		cout << "You are eligible for voting!...";
	}
	else if(age<=18)
	{
		cout << "You are not eligible for voting!...";
	}
	
	return 0;
}