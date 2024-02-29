#include<iostream>
using namespace std;

class Calculator
{
	int a,b;
	public :
	
	void Division()
	{
		cout << "Enter the value of a : ";
		cin >> a;
		cout << "Enter the value of b : ";
		cin >> b;
		
		try
		{
			if(b==0)
			{
				throw b;
			}
			else
			{
				cout << "Division is " << a/b;
			}
		}
		catch(int b)
		{
			cout << "Can't divide by zero" << endl;
		}	
	}	
};

int main()
{
	Calculator c1;
	
	c1.Division();
	
	return 0;
}