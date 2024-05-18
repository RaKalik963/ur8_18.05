#include <iostream>
#include <ctime>
using namespace std;


int main()
{   
    srand(time(0));
	const int size = 20;

	int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() %  500;
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int min = arr[0];
    int max = arr[0];
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
	return 0;
	system("pause");
}