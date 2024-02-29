#include<iostream>
using namespace std;

class Employee
{
	string name,designation;
	int salary;
	
	public :
		
		void set()
		{
			cout << "Enter the name : ";
			getline(cin,name);
			cout << "Enter the salary : ";
			cin >> salary;
			cin.ignore();
			cout << "Enter the designation : ";
			getline(cin,designation);
		}
		void get()
		{
			cout << endl;
			cout << "Employee Details !!"  << endl;
			cout << "Name is " << name << endl;
			cout << "salary is " << salary << endl;
			cout << "designation is " << designation << endl;
		}
};
int main()
{
	Employee e1;
	
	e1.set();
	e1.get();
	
	return 0;
}