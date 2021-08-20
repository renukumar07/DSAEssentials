#include <iostream>
using namespace std;

// O(N^2)
int largestSumSubArrayPrefixSum(int arr[], int size) {
    int sum = 0, tempSum = 0;
    int prefixSum[size];
    prefixSum[0] = arr[0];
    for (int i = 1; i < size; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }
    for (int i = 0; i < size; i++) {
        cout << prefixSum[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            //tempSum = i>0?prefixSum[j] - prefixSum[i - 1]:prefixSum[i];
            if (i == 0) {
                tempSum = prefixSum[i];
            } else {
                tempSum = prefixSum[j] - prefixSum[i - 1];
            }
            sum = max(sum, tempSum);
        }
    }
    return sum;
}
int main() {
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);

    int maxSubArraySum = largestSumSubArrayPrefixSum(arr, size);
    cout << "Largest sum of sub Array is: " << maxSubArraySum << endl;
    return 0;
}