#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	const int size = 6;
	cout << "enter the profit for the first month";
	int month1;
	cin >> month1;
	cout << "enter the profit for the second month";
	int month2;
	cin >> month2;
	cout << "enter the profit for the third month";
	int month3;
	cin >> month3;
	cout << "enter the profit for the fourth month";
	int month4;
	cin >> month4;
	cout << "enter the profit for the fifth month";
	int month5;
	cin >> month5;
	cout << "enter the profit for the six month";
	int month6;
	cin >> month6;

	int arr[size] = {month1,month2,month3,month4,month5,month6};

	float sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	cout << "Sum: " << sum << endl;
	return 0;
	system("pause");
}