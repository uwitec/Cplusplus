#include <iostream>
#include <iomanip>
#include <string>


using namespace std;



class PhoneNumber
{
	friend ostream &operator << (ostream &, const PhoneNumber &);
	friend istream &operator >> (istream &, PhoneNumber &);
private:
	string areaCode;
	string exchange;
	string line;
};

ostream &operator << (ostream &output, const PhoneNumber &number)
{
	output << "(" << number.areaCode << ")" << number.exchange << "-" << number.line;
	return output;
}
istream &operator >> (istream & input, PhoneNumber &number)
{
	input.ignore();
	input >> setw(3) >> number.areaCode;
	input.ignore(2);
	input >> setw(3) >> number.exchange;
	input.ignore();
	input >> setw(4) >> number.line;
	return input;
}

int main()
{
	PhoneNumber phone;

	cout << "Enter phone numebr in the form (123) 456-7890" << endl;

	cin >> phone;

	cout << "The phone number that was entered was: ";

	cout << phone << endl;

	system("pause");
}
