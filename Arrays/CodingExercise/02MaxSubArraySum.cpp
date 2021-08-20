// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int maximumSubArraySum(vector<int> arr) {
    int maxSum=INT_MIN, currentSum=0;
    for (int element : arr) {
        currentSum += element;
        maxSum = max(maxSum, currentSum);
        if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main() {
    vector<int> vec = {-3, -5, -1, -9, -6, -8,-9};
    cout << maximumSubArraySum(vec);
}