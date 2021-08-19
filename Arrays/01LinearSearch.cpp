#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {10, 20, 30, 50, 5, 3, 22, 44};
    int size = sizeof(arr) / sizeof(int);
    int key;
    cout << "Please enter to search: ";
    cin >> key;
    int index = linear_search(arr, size, key);
    if (index != -1)
        cout << key << " is present at index " << index << endl;
    else
        cout << key << " is NOT FOUND!" << endl;
}