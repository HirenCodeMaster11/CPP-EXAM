#include<iostream>
using namespace std;

class Employee
{
	int salary;
	
	public :
		
		void set()
		{
			cout << "Enter the salary : ";
			cin >> salary;
		}
		void get()
		{
			cout << "salary is " << salary << endl;
		}
		Employee operator+(Employee &e2)
		{
			Employee temp;
			int x = this->salary + e2.salary;
			
			temp.salary = x;
			
			return temp;
		}
};
int main()
{
	Employee e1,e2,e3;
	
	e1.set();
	e2.set();
	
	e3 = e1 + e2;
	
	e3.get();
	return 0;
}