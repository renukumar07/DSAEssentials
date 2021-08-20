#include <iostream>
using namespace std;

// O(N^3)
int largestSumSubArrayPrefixSum(int arr[], int size) {
    int sum = 0, tempSum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            tempSum = 0;
            for (int k = i; k <= j; k++) {
                tempSum = tempSum + arr[k];
            }
            //sum = max(sum, tempSum);
            if (sum < tempSum) {
                sum = tempSum;
            }
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