#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> arr1;
    cout << "Size of arr1 vector is: " << arr1.size() << endl;

    vector<int> arr2 ={1,2,34,5};
    arr2.push_back(1);
    arr2.push_back(2);
    arr2.push_back(10);
    arr2.push_back(15);
    arr2.push_back(16);
    cout << "Size of arr2 vector is: " << arr2.size() << endl;
    cout << "Capacity of arr2 vector is: " << arr2.capacity() << endl;
    cout << "Printing Vector arr2: " << endl;
    for (int i = 0; i < arr2.size(); i++) {
        cout << arr2[i] << endl;
    }

    arr2.pop_back();
    arr2.push_back(18);
    cout << "Printing Vector arr2: " << endl;
    for (int vec : arr2) {
        cout << vec << endl;
    }
    vector<int> arr3(10,8);
    cout << "Printing Vector arr3: " << endl;
    for (int vec : arr3) {
        cout << vec << endl;
    }
    return 0;
}