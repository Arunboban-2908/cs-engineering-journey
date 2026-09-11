#include <iostream>          // Provides input/output functionality
using namespace std;         // Allows us to use cout without std::

int main() {

    // An array stores multiple values of the same data type.
    // This array contains 5 integers.
    int arr[5] = {10, 20, 30, 40, 50};

    // Arrays use zero-based indexing.
    // arr[0] is the first element.
    cout << arr[0] << endl;

    // The last index is size - 1.
    // For an array of size 5, the last index is 4.
    cout << arr[4] << endl;

    return 0;
}