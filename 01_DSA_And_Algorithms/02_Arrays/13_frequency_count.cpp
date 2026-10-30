#include <iostream>
using namespace std;
int main(){
    int arr[] = {4, 7, 4, 3, 7, 4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    bool visit[n] = {false};
    for (int i = 0; i < n; i++){
        if(visit[i] == true){
            continue;
        }
        int count = 0;
        for(int j = 0; j < n; j++){

            if(arr[i] == arr[j]){
                count++;
            }
        }
        cout << "Frequency of " << arr[i] << ":" << count << endl;
        for (int j = 0; j<n; j++){
            if (arr[i] == arr[j]){
                visit[j] = true;
            }
        }
    }
    return 0;
}