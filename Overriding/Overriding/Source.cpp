#include <iostream>
using namespace std;

class Parent
{
private:
	//int data = 3;
public:
	/*Parent(int data)
	{
		this->data = data;
	}*/
	virtual void doSomething()
	{
		cout << "Something" << endl;
	}
	void doSomethingElse()
	{
		cout << "Do 3 things" << endl;
	}
	/*friend void showOtherParent(const Parent &)
	{
		cout << other->data << endl;
	}*/
};

class Child : public Parent
{
public:
	void doSomething() override
	{
		cout << "Child's Something" << endl;
	}
	void doSomethingElse()
	{
		cout << "Lazy Child" << endl;
	}
};

int main()
{
	Parent *pt;
	Child c;

	pt = &c;

	pt->doSomething();
	pt->doSomethingElse();

	c.doSomethingElse();
	system("pause");

	/*Parent p1(5);
	Parent p2(-30);*/
	
}