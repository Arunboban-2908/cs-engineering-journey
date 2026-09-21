#include <iostream>
using namespace std;

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;   
}

/*
Explanation of Array Reversal
1. Initialize two pointers, left and right, to the first and last indices of the array.
2. Swap the elements at the left and right indices.
3. Move the left pointer one position to the right and the right pointer one position to the left.
4. Repeat steps 2-3 until the left pointer is no longer less than the right pointer.
5. The array is now reversed.
*/


// another way with only 2 variables
/*

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = n -1;

    while (left < right) {
        arr[left] = arr[left] + arr[right];
        arr[right] = arr[left] - arr[right];
        arr[left] = arr[left] - arr[right];

        left++;
        right--;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;   
}
*/