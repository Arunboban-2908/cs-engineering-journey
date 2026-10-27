#include <iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 25, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool isSorted = true;
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout << "The array is sorted" << endl;
    }else{
        cout << "The array is not sorted" << endl;
    }
    return 0;
}