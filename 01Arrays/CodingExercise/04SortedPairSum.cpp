// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

// Given a sorted array and a number val, find a pair in array whose sum is closest to val
pair<int, int> sortedPairSum(vector<int> arr, int val) {
    int valDiff = val - arr[0] + arr[0];
    int left = arr[0], right = arr[0];
    int currentDiff = valDiff;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i; j < arr.size(); j++) {
            int currentSum = arr[i] + arr[j];
            if (val > currentSum) {
                currentDiff = val - currentSum;
            } else {
                currentDiff = currentSum - val;
            }
            if (currentDiff < valDiff) {
                valDiff = currentDiff;
                left = arr[i];
                right = arr[j];
            }
        }
    }
    return pair<int, int>(left, right);
}

int main() {
    vector<int> vec = {10, 22, 28, 29, 30, 40};
    pair<int, int> pair1 = sortedPairSum(vec, 54);
    cout << pair1.first << " " << pair1.second << endl;
}