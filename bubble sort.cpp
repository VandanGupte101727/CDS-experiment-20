#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[5] = {10, 17, 27, 4, 6};
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                swap(arr[j], arr[j + 1]); 
            }
        }
    }

    cout << "The sorted array will be: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}