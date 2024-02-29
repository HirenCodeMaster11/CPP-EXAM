#include<iostream>
using namespace std;

class Animal
{
	public :

	virtual void sound() = 0;
	virtual void move() = 0;
};

class Dog : public Animal
{
	public :
		
	void sound()
	{
		cout << "Dog Information !!" << endl << endl;
		cout << "Bhav bhav bhav ..." << endl;
	}
	void move()
	{
		cout << "Running fast as compare to cat !! " << endl << endl;
	}
};

class Bird : public Animal 
{
	public :
		
	void sound()
	{
		cout << "Bird Information !!" << endl << endl;
		cout << "peacoke sound is tehu tehu tehu !!" << endl;
	}
	void move()
	{
		cout << "flying in the sky !! " << endl;
	}
};

int main()
{
	Animal *ptr[2];
	Dog d1;
	Bird b1;
	
	ptr[0] = &d1;
	ptr[0] = &b1;
	
	ptr[0]->sound();
	ptr[0]->move();
	
	ptr[0]->sound();
	ptr[0]->move();
	
	ptr[1] = &d1;
	ptr[1] = &b1;
	
	ptr[1]->sound();
	ptr[1]->move();
	
	ptr[1]->sound();
	ptr[1]->move();

	return 0;
}
