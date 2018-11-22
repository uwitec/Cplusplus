#include <iostream>
using namespace std;


template<class C>

class Cat
{
private:
	C data;
public:
	Cat(C data);
	void speak(C something);
};

template<class C>
Cat<C>::Cat(C data)
{
	this->data = data;
}
