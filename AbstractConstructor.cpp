#include <iostream>
using namespace std;

class Base
{
	protected:
		int x;
	public:
		Base(int i){
			x = i;
			cout << "Constructor of base is called" << endl;
		}
		virtual void fun() = 0;
};

class Derived : public Base
{
	int y;
	public:
		Derived(int i, int j):Base(i)
		{
			y = j;
			cout << "Derived class construcot is called " << endl;
		}
		void fun()
		{
			cout << "x = " << x << " y = " << y << endl;
		}

};


int main12333()
{
	Derived d(3, 4);
	d.fun();
	return 0;
}