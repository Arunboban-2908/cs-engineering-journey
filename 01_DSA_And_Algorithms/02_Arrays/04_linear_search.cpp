#include <iostream>
using namespace std;
int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int target = 30;   // try these 50 60 20 11
    bool found = false;
    for (int i = 0; i < 5; i++){
        if (arr[i] == target){
            found = true;
            cout << "Element " << target << " found at index " << i << endl;
            break;
        }     
    }
    if (!found){
        cout << "Element " << target << " not found in the array." << endl;
    }
    return 0;
}

/*
Explanation of Linear Search
Linear search is a simple search algorithm that checks each element of an array 
sequentially until the desired element is found or the end of the array is reached.
1. Start from the first element of the array and compare it with the target value.
2. If the element matches the target, return the index of that element.
3. If the element does not match, move to the next element and repeat step 2
4. If the end of the array is reached and the target is not found, return a message indicating that the element is not present in the array.
*/