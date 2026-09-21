#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5}; // try with 1, 2, 3, 4, 5, 1
    int si = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < si; i++){
        for (int j = i + 1; j < si; j++){
            if (arr[i] == arr[j]){
                cout << "repeated";
                return 0;
            }
        }
    }
    cout << "not repeated";
    return 0;
}