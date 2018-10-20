#include <iostream>
using namespace std;

int main() {
	double numerator;
	double denominator;
	int counter = 0;
	double percent = 0;
	cout << "Enter the numerator: " << endl;
	cin >> numerator;
	cout << "Enter the denominator: " << endl;
	cin >> denominator;
	percent = numerator / denominator * 100;
	cout << numerator << "/" << denominator << "=" << percent << endl;
	cout << endl;
	while (percent < 80) {
		numerator++;
		denominator++;
		counter++;
		percent = numerator / denominator * 100;
		cout << numerator << "/" << denominator << "=" << percent << endl;
	}
	cout << counter << endl;
	system("pause");

}