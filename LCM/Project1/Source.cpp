// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;


int main()
{
	const int number = 5;
	int lcm[number] = { 3,4,5,6,7 };
	int numberCount[number] = { 0,0,0,0,0 };
	int counter;
	counter = 2;
	

	int total = 1;
	for (int i = 0; i < number; i++) {
		total *= lcm[i];
	}
	int ans;
	ans = 1;
	while (total != 1)
	{
		if (total % counter == 0 && number > counter - 2)
		{
			total = total / lcm[counter - 2];
			if (numberCount[counter - 2] == 0)
			{
				ans *= lcm[counter - 2];
				counter++;
			}
			else
			{
				numberCount[counter - 2] = 0;
			}
			break;
		}
		
	}
	cout << ans << endl;
	system("pause");
}
