#include <bits/stdc++.h>
using namespace std;

void find2ndLargest(vector<int> &arr, int n){
    int largest = arr[0];
    int slargest = INT_MIN;

    for (int i = 1; i < n;i++){
        if (arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if ( arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    cout << "The 2nd Largest Ele is: " << slargest << endl;
}

void find2ndSmallest(vector<int> &arr, int n){
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for (int i = 1; i < n; i++){
        if (arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    }
    cout << "The 2nd Smallest Ele is: " << ssmallest << endl;
}

int main() {
    int n, a;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++){
        cin >> a;
        arr.push_back(a);
    }
    find2ndLargest(arr, n);
    find2ndSmallest(arr, n);
}