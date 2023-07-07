#include<bits/stdc++.h>
using namespace std;

int hashh[10000000];  // cannot hash bigger int ranges like 10^8 or bigger
int main(){
    int n;
    cin >> n;
    int arr[n] = {0};

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // precompute
    for (auto i : arr){
        hashh[i]++;
    }

    // fetch
    int q;
    cin >> q;

    while(q--){
        int num;
        cin >> num;

        cout << hashh[num] << endl;
    }

    return 0;
}