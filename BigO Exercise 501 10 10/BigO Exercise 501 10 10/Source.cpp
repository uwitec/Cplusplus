# include <iostream>

using namespace std;

int findMaxCompareToMax(int *nums, int size);
//int findMaxCompareToAll(int *nums, int size);


int main()
{
	int num [5]  = { 2, 11, 23, 5, 8 };
	cout << findMaxCompareToMax(num, 5) << endl;
	system("pause");
}

//Big(O) for this: 2 + 2n ==> O(n)
int findMaxCompareToMax(int *nums, int size) 
{
	int max = *nums; // 1 count
	for (int i = 0; i < size; i++) // count the number of size (n)
	{
		if (max < *(nums+i)) // 1 count
		{
			max = *(nums+i); // 1 count
		}

	}
	return max; //1 count
}
/*int findMaxCompareToAll(int *a)
{

}*/