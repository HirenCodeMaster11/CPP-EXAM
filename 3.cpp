#include<iostream>
using namespace std;

class Shape
{
	protected :
	string color;
	
	public :

	virtual void area() = 0;
};

class Circle : public Shape
{
	int radius;
	public :
		
	void area()
	{
		cout << "Enter the color : ";
		cin >> color;
		cout << "Enter the radius : ";
		cin >> radius;
		
		cout << "Circle color : ",color;
		cout << endl;
		cout << "Circle Area is " << 3.14 * radius * radius << endl;
	}
	
};

class Rectangle : public Shape 
{
	int lenght,width;
	public :
		
	void area()
	{
		cout << "Enter the color : ";
		cin >> color;
		cout << "Enter the lenght : ";
		cin >> lenght;
		cout << "Enter the width : ";
		cin >> width;
		
		cout << "Rectangle color : ",color;
		cout << endl;
		cout << "Rectangle Area is " << lenght * width << endl << endl;
	}
};

int main()
{
	Circle c1;
	Rectangle r1;

	c1.area();
	r1.area();

	return 0;
}