#include <iostream>
using namespace std;

template<class T>

T add(T value1, T value2)
{
	T answer;
	answer = value1 + value2;
	return answer;
}

/*int main()
{
	int i= 5, j = 6, k;
	char l = 'a', m = 'b', n;
	double o = 2.35, p = 6.44, q;

	k = add<int>(i, j);
	n = add<char>(l, m);
	q = add<double>(o, p);
	cout << k << endl;
	cout << n << endl;
	cout << q << endl;


	system("pause");
}*/