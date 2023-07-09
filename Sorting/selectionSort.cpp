#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    // Traverse through all array elements
    for (int i = 0; i < n - 1; i++){
        int mini = i;
        for (int j = i; j < n; j++){
            if (arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i], arr[mini]);
    }
}

int main(){

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    selection_sort(arr, n);
    /*
    T.C => n + (n-1) + (n-2) ... 2 + 1 =>  ( n * (n-1) ) / 2  
    => ( n^2 / 2 ) + ( n / 2)       =>       O(n^2)
    */

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
        return 0;
}