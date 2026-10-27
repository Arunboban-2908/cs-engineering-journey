#include <iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int lar = arr[0];
    int second = 0;
    bool foundSecond = false;
    for (int i = 0; i < n; i++){
        if(arr[i] > lar){
            second = lar;
            lar = arr[i];
            foundSecond = true;
        }
        else if(arr[i]<lar && (!foundSecond || arr[i]>second)){
            second = arr[i];
            foundSecond = true;
        }
    }
    if(foundSecond){
        cout << "The second largest element is: " << second << endl;
    }
    else{
        cout << "There is no second largest element in the array" << endl;
    }
    return 0;
}