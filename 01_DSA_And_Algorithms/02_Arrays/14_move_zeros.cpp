#include <iostream>
using namespace std;
int main(){
    int arr[] = {0, 1, 0, 3, 12};
    int i = 0;
    int j = 0;
    int size = sizeof(arr)/ sizeof(arr[0]);
    while (j < size){
        if (arr[j] == 0){
            j++;
        }
        else{
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j++;
        }
    }
    for (int i=0; i<size; i++){
        cout <<"output: " << arr[i] << endl;

    }
}