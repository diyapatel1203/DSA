#include<iostream>
using namespace std;

class employee{
   public:
   int age;
   float salary;
   string name;	
};

int main()
{
	employee e1;
	
	e1.age=23;
	e1.name="subham";
	e1.salary=20000;
	
	cout << e1.age << endl;
	cout << e1.name << endl;
	cout << e1.salary << endl;
	
	return 0;
}