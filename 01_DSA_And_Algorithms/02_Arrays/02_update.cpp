#include <iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    arr[3] = 45;
    for (int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
}


/*
Updating Array Elements

An array element can be changed by accessing its index
and assigning a new value to it.

Example:
arr[3] = 45;

This replaces the value at index 3 with 45.
Array indexing starts from 0.
*/