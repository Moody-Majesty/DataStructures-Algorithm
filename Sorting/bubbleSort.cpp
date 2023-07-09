#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    // Traverse through all array elements
    for (int i = n-1; i >= 0; i--){
        int didSwap = 0;
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
            break;
    }
}

int main(){

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubble_sort(arr, n);
    /*
    T.C => n + (n-1) + (n-2) ... 2 + 1 =>  ( n * (n-1) ) / 2  
    => ( n^2 / 2 ) + ( n / 2)       =>       O(n^2)
    */

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
        return 0;
}