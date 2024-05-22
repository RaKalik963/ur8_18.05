#include <iostream>
#include <ctime>
using namespace std;


int main() {
    srand(time(0));
    const int size = 15;

    int arr[size];
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = rand() % 15 - 5;
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int sum_negatives = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            sum_negatives += arr[i];
        }
    }
    cout << "sum of negative numbers " << sum_negatives << endl;

    int min_value = arr[0], max_value = arr[0];
    int min_index = 0, max_index = 0;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min_value) {
            min_value = arr[i];
            min_index = i;
        }
        if (arr[i] > max_value) {
            max_value = arr[i];
            max_index = i;
        }
    }
    if (min_index > max_index) {
        int temp = min_index;
        min_index = max_index;
        max_index = temp;
    }

    int product_between_min_max = 1;
    for (int i = min_index + 1; i < max_index; ++i) {
        product_between_min_max *= arr[i];
    }
    cout << "product of numbers betwean min and max " << product_between_min_max << endl;

    int product_even_numbered = 1;
    for (int i = 0; i < size; i += 2) {
        product_even_numbered *= arr[i];
    }
    cout << "product of even-numbered numbers " << product_even_numbered << endl;

    int first_negative_index = -1, last_negative_index = -1;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            if (first_negative_index == -1) {
                first_negative_index = i;
            }
            last_negative_index = i;
        }
    }
    int sum_between_negatives = 0;
    if (first_negative_index != -1 && last_negative_index != -1 && first_negative_index != last_negative_index) {
        for (int i = first_negative_index + 1; i < last_negative_index; ++i) {
            sum_between_negatives += arr[i];
        }
    }
    cout << "sum of the numbers located between first and last negative number " << sum_between_negatives << endl;

    return 0;
}