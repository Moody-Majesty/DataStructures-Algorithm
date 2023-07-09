#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i] <= pivot && i < high){  // putting = guys to left side of pivot
            i++;
        }
        while(arr[j] > pivot && j > low){
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(vector<int> &arr, int low, int high){
    if (low < high){
        // Partition the array around pivot element and get its index
        int part = partition(arr, low, high);

        quick_sort(arr, low, part - 1);
        quick_sort(arr, part + 1, high);
    }
}

int main(){

    int n, a;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++){
        cin >> a;
        arr.push_back(a);
    }

    quick_sort(arr, 0, n-1);
    /*
    T.C => O(n log n)    
    S.C => O(1)
    */

    for (auto el : arr){
        cout << el << " ";
    }
        return 0;
}