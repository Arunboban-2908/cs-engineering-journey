#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int t = 30; // element to be searched
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == t){
            found = true;
            cout << "Element found at index: " << i << endl;
            break;
        }
    }
    if (!found) {
        cout << "Element not found" << endl;
    }
    return 0;
}


/*
Explanation of Linear Search
1. Initialize a boolean variable found to false.
2. Loop through each element of the array.
3. If the current element matches the target value, set found to true, print the index, and break the loop.
4. After the loop, check if found is still false. If it is, print that the element was not found.
*/