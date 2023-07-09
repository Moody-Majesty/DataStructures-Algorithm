#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    // Traverse through all array elements
    for (int i = 0; i < n; i++){
        int j = i;
        while ((j > 0 && arr[j-1] > arr[j])){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}

int main(){

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    insertion_sort(arr, n);
    /*
    T.C => n + (n-1) + (n-2) ... 2 + 1 =>  ( n * (n-1) ) / 2  
    => ( n^2 / 2 ) + ( n / 2)       =>       O(n^2)
    */

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
        return 0;
}