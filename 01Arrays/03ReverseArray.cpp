#include <iostream>
using namespace std;

void reverse_array(int arr[], int size) {

    //Alternate Approach

    // for (int i = 0; i < size / 2; i++) {
    //     //swap(arr[i], arr[size - i - 1]);
    //     int temp = arr[size - i -1];
    //     arr[size - i -1] = arr[i];
    //     arr[i]=temp;
    // }
    
    int start = 0;
    int end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start += 1;
        end -= 1;
    }
}
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {10, 20, 30, 40, 45, 50, 60, 70, 89};
    int size = sizeof(arr) / sizeof(int);

    cout << "Before Reversing array" << endl;
    print_array(arr, size);

    reverse_array(arr, size);

    cout << "After Reversing array" << endl;
    print_array(arr, size);

    return 0;
}