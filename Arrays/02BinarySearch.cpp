#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {10, 20, 30, 40, 45, 50, 60, 70, 89};
    int size = sizeof(arr) / sizeof(int);
    int key;
    cout << "Please enter to search: ";
    cin >> key;
    int index = binary_search(arr, size, key);
    if (index != -1)
        cout << key << " is present at index " << index << endl;
    else
        cout << key << " is NOT FOUND!" << endl;
}