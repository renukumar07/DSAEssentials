// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector<int> arr) {
    int max = arr[0];
    for(int element: arr){
        if(element>max){
            max = element;
        }
    }
    return max;
     
}

int main(){
    vector<int> vec = {3,5,1,9,6,8};
    cout<<largestElement(vec);
}