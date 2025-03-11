#include<iostream>

using namespace std;

class Sport{
	 
	 private:
	 int age;
	 string name;
	 string role;
	 string game_name;
	 
	 public:
	 void input(int age,string name,string role,string game_name)
	 {
		this->age=age;
		this->name=name;
		this->role=role;
		this->game_name=game_name; 	
	 }	
	 
	 void output()
	 {
	 	cout << age << endl;
	 	cout << name << endl;
	 	cout << role << endl;
	 	cout << game_name << endl;
	 }
};

int main(){
	
	Sport s1;
	
	s1.input(23,"virat","bowler","cricket");
	s1.output();
	
	
	return 0;
}