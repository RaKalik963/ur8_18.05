#include <iostream>
#include <ctime>
using namespace std;


int main() {
    int arr[] = { 1.2, -3.4, 5.6, -7.8, 9.0, -1.2, 3.4 };
    int n = 7;

    double sum_negatives = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            sum_negatives += arr[i];
        }
    }
    cout << "Сума від'ємних елементів: " << sum_negatives << endl;

    double min_value = arr[0], max_value = arr[0];
    int min_index = 0, max_index = 0;
    for (int i = 1; i < n; ++i) {
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

    double product_between_min_max = 1;
    for (int i = min_index + 1; i < max_index; ++i) {
        product_between_min_max *= arr[i];
    }
    cout << "Добуток елементів між min і max: " << product_between_min_max << endl;

    double product_even_indices = 1;
    for (int i = 0; i < n; i += 2) {
        product_even_indices *= arr[i];
    }
    cout << "Добуток елементів з парними індексами: " << product_even_indices << endl;

    int first_negative_index = -1, last_negative_index = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) {
            if (first_negative_index == -1) {
                first_negative_index = i;
            }
            last_negative_index = i;
        }
    }
    double sum_between_negatives = 0;
    if (first_negative_index != -1 && last_negative_index != -1 && first_negative_index != last_negative_index) {
        for (int i = first_negative_index + 1; i < last_negative_index; ++i) {
            sum_between_negatives += arr[i];
        }
    }
    cout << "Сума елементів між першим і останнім від'ємними елементами: " << sum_between_negatives << endl;

    return 0;
}