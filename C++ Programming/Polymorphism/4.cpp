#include<iostream>
using namespace std;
class Parent
{
	public :
		void display()
		{
			cout<<"\nHello from Parent class";
		}
};
class Child : public Parent
{
	public :
		void display()
		{
			cout<<"\nHello from Child class";
		}
};
class GrandChild : public Child
{
	public :
		void display()
		{
			cout<<"\nHello from Grand child class";
		}
};
int main()
{
	GrandChild gc;
	gc.display();
	return 0;
}