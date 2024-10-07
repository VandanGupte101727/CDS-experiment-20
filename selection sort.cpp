#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {10, 17, 27, 4, 6};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) { 
                min_index = j;             }
        }
        if (i != min_index) {
            swap(arr[i], arr[min_index]);
        }
    }

    cout << "The sorted array will be: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";    }

    cout << endl;
    return 0;}
