#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 50, 30, 70, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}

/*
Explanation of Finding Maximum and Minimum in an Array
1. Initialize two variables, max and min, with the first element of the array.
2. Traverse the array starting from the second element.
3. For each element, compare it with the current max and min values.
4. If the current element is greater than max, update max with the current element.
5. If the current element is less than min, update min with the current element.
6. After traversing the entire array, max will hold the maximum value and min will hold the minimum value.
*/