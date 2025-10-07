#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 2, 9, 1, 5};
    int n = 5;

    for (int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;

        // Move elements greater than temp to one position ahead
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}