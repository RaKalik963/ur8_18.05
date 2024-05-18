#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	const int size = 6;

	int arr[size] = {1,2,3,4,5,6};

    cout << "reverse: ";
    for (int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
	return 0;
	system("pause");
}