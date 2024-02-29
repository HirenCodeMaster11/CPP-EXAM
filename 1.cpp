#include<iostream>
using namespace std;

class Rectengle
{
	float lenght,width,area;
	
	public :
		
		void set()
		{
			cout << "Enter the value of lenght : ";
			cin >> lenght;
			cout << "Enter the value of width : ";
			cin >> width;
		}
		void get()
		{
			area = lenght * width;
			
			cout << "Rectengle area is " << area;
		}
};
int main()
{
	Rectengle r1;
	
	r1.set();
	r1.get();
	return 0;
}