#include <iostream>
using namespace std;

void printAllSubArrays(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (i != j) {
                cout << "(" << arr[i] << "," << arr[j] << ")";
            }
        }
        cout << endl;
    }
    cout << endl;
}
int main() {
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(int);

    printAllSubArrays(arr, size);

    return 0;
}