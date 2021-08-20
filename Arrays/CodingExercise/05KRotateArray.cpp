// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> kRotate(vector<int> arr, int k) {
    vector<int> newArr;
    for (int i = arr.size() - k; i < arr.size(); i++) {
        newArr.push_back(arr[i]);
    }
    for (int i = 0; i < arr.size() - k; i++) {
        newArr.push_back(arr[i]);
    }
    return newArr;
}

void printVector(vector<int> vec) {
    for (int element : vec) {
        cout << element << " ";
    }
    cout << endl;
}
int main() {
    vector<int> vec = {1, 3, 5, 7, 9};
    vec = kRotate(vec, 2);
    printVector(vec);
    vec = {28, 29, 30, 40, 10, 22};
    vec = kRotate(vec, 4);
    printVector(vec);
}