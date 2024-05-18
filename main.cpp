#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	const int size = 5;
	cout << "enter side 1 ";
	int side1;
	cin >> side1;
	cout << "enter side 2 ";
	int side2;
	cin >> side2;
	cout << "enter side 3 ";
	int side3;
	cin >> side3;
	cout << "enter side 4 ";
	int side4;
	cin >> side4;
	cout << "enter side 5 ";
	int side5;
	cin >> side5;

	int arr[size] = {side1,side2,side3,side4,side5};

	float sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << "perimetr= " << sum << endl;
	return 0;
	system("pause");
}