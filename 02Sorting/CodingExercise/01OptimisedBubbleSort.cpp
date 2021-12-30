#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> vec) {
    for (int element : vec) {
        cout << element << " ";
    }
    cout << endl;
}

vector<int> opt_bubble_sort(vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            for (int j = 0; j < arr.size() - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
                printVector(arr);
            }
        }
    }
    return arr;
}

int main() {
    vector<int> vec = {1, 3, 5, 7, 9};
    vec = opt_bubble_sort(vec);
    printVector(vec);
}