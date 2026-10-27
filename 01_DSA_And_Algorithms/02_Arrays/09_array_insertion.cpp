#include<iostream>
using namespace std;
int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 10;
    int index = 2;
    for(int i = size - 1; i >= index; i--){
        arr[i + 1] = arr[i];
    }
    size++;
    arr[index] = element;
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}