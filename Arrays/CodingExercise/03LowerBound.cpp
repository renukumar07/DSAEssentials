// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

// Lower Bound of given integer means integer,
// which is just smaller than or equal to than given integer
int lower_bound(vector<int> arr, int val) {
    for (int i = arr.size() - 1; i > 0; i--) {
        if (arr[i] <= val) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    vector<int> vec = {-1, -1, 2, 3, 5};
    vector<int> vec2 = {1, 2, 3, 4, 6};
    cout << lower_bound(vec, 4)<<endl;
    cout << lower_bound(vec2, 4)<<endl;
}