#include <iostream>
using namespace std;

// O(N)
int largestSumSubArrayKadence(int arr[], int size) {
    int largestSum = 0, tempSum = 0;
    for (int i = 1; i < size; i++) {
        tempSum = tempSum + arr[i];
        if(tempSum<0){
            tempSum = 0;
        }
        if(tempSum>largestSum){
            largestSum = tempSum;
        }
    }
    return largestSum;
}
int main() {
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);

    int maxSubArraySum = largestSumSubArrayKadence(arr, size);
    cout << "Largest sum of sub Array is: " << maxSubArraySum << endl;
    return 0;
}