#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int index1 = 1; // Position of the first element to swap (0-based index)
    int index2 = 3; // Position of the second element to swap

    // Display array before swap
    cout << "Before swap: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Swapping using a temporary variable
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;

    // Display array after swap
    cout << "After swap: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
