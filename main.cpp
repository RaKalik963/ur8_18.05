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

	int arr[size] = { month1,month2,month3,month4,month5,month6,month7,month8,month9,month10,month11,month12 };

	cout << "enter start of diapasone ";
	int d_start;
	cin >> d_start;
	cout << "enter end of diapasone: ";
	int  d_end;
	cin >> d_end;

	d_end -= 1;
	d_end -= 1;

	if (d_start < 0 || d_end > size || d_start > d_end) {
		cout << "error" << endl;
		system("pause");
	}
	int min = d_start, max = d_start;
	for (int i = d_start; i <= d_end; ++i) {
		if (arr[i] > arr[max]) {
			max = i;
		}
		if (arr[i] < arr[min]) {
			min = i;
		}
	}

	cout << "max: " << max + 1 << "profit= " << arr[max]  << endl;
	cout << "min: " << min + 1 << "profit= " << arr[min]  << endl;

	return 0;
	system("pause");
}