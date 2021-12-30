// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> vec) {
    for (int element : vec) {
        cout << element << " ";
    }
    cout << endl;
}

vector<int> insertion_sort(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        int currentElement = arr[i];
        int prevIndex = i - 1;
        while (prevIndex >= 0 && arr[prevIndex] > currentElement) {
            arr[prevIndex + 1] = arr[prevIndex];
            prevIndex--;
        }
        arr[prevIndex + 1] = currentElement;
    }
    return arr;
}

int main() {
    vector<int> vec = {5, 4, 3, -1, 2, 1};
    vec = insertion_sort(vec);
    printVector(vec);
}