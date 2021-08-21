// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> vec) {
    for (int element : vec) {
        cout << element << " ";
    }
    cout << endl;
}

vector<int> bubble_sort(vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
            printVector(arr);
        }
    }
    return arr;
}

int main() {
    vector<int> vec = {5, 4, 3, 2, 1};
    vec = bubble_sort(vec);
    printVector(vec);
}