#include<iostream>
using namespace std;

class Shape
{
	protected :
		
	string color;
	
	public :

	virtual void area() = 0;
	virtual void display() = 0;
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
	}
	void display()
	{
		cout << "Circle Class" << endl << endl;
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
	}
	void display()
	{
		cout << "Rectangle Class" << endl << endl;
		cout << "Rectangle color : ",color;
		cout << endl;
		cout << "Rectangle Area is " << lenght * width;
	}
};

int main()
{
	Shape *ptr[2];
	Circle c1;
	Rectangle r1;
	
	ptr[0] = &c1;
	ptr[0] = &r1;
	
	c1.area();
	r1.area();
	
	ptr[0]->display();
	ptr[0]->display();
	
	ptr[1] = &c1;
	ptr[1] = &r1;
	
	c1.area();
	r1.area();
	
	ptr[1]->display();
	ptr[1]->display();

	return 0;
}