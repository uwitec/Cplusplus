#include <iostream>
#include <string>
using namespace std;


class Parent 
{
private:
	int age;
	int getAge();
public:	
	string name = "Tom";
	Parent(string name)
	{
		this->name = name;
	}

	void doSomething();
};
// if public is not there (assumes private) then the program crashes
class Child : public Parent
{
public:
	Child(string name) : Parent(name)
	{

	}
};

int main()
{
	Child c("Kenny");
	cout << c.name << endl;
	system("pause");
}