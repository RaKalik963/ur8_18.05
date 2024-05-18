#include <iostream>
#include <ctime>
using namespace std;


int main()
{        
    const int size = 20;
    srand(time(0));

    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 25 - 10;
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    int neg = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            neg += arr[i];
        }
    }
	return 0;
	system("pause");
}