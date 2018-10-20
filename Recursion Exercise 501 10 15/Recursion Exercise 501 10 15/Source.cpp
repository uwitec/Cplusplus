#include <iostream>
using namespace std;



int getFactorialByValue(int number)
{
	
	if (number > 1)
	{
		return number * getFactorialByValue(number - 1);
	}
	return number;
}

int getFactorialByReference(int &number)
{
	if (number > 1)
	{
		int next = number - 1;
		return number * getFactorialByReference(next);
	}
	return number;
}
int getFactorialByAddress(int* number)
{
	if (*number > 1)
	{
		int next = *number - 1;
		return (*number * getFactorialByAddress(&next));
	}
	return *number;
}


int main()
{
	int number = 5;
	int *numberPtr = &number;
	cout << getFactorialByValue(number) << endl;
	cout << getFactorialByReference(number) << endl;

	cout << getFactorialByAddress(numberPtr) << endl;
	
	system("pause");
}

