#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	const int size = 12;
	cout << "enter the profit for the first month ";
	int month1;
	cin >> month1;
	cout << "enter the profit for the second month ";
	int month2;
	cin >> month2;
	cout << "enter the profit for the third month ";
	int month3;
	cin >> month3;
	cout << "enter the profit for the fourth month ";
	int month4;
	cin >> month4;
	cout << "enter the profit for the fifth month ";
	int month5;
	cin >> month5;
	cout << "enter the profit for the six month ";
	int month6;
	cin >> month6;
	cout << "enter the profit for the seventh month ";
	int month7;
	cin >> month7;
	cout << "enter the profit for the eighth month ";
	int month8;
	cin >> month8;
	cout << "enter the profit for the ninth month ";
	int month9;
	cin >> month9;
	cout << "enter the profit for the tenth month ";
	int month10;
	cin >> month10;
	cout << "enter the profit for the eleventh month ";
	int month11;
	cin >> month11;
	cout << "enter the profit for the twelfth month ";
	int month12;
	cin >> month12;

	int arr[size] = {month1,month2,month3,month4,month5,month6,month7,month8,month9,month10,month11,month12};

	int min = arr[0];
	int max = arr[0];
	int m_min = 1;
	int m_max = 1;

	for (int i = 1; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
			m_min = i + 1;
		}
		if (arr[i] > max) {
			max = arr[i];
			m_max = i + 1;
		}
	}

	cout << "min= " << min << " in month  " << m_min << endl;
	cout << "max= " << max << " in month " << m_max << endl;
	return 0;
	system("pause");
}