#include<bits/stdc++.h>
using namespace std;


void gcdhcf(int n1, int n2){
    for (int i = min(n1, n2); i >= 1; i--){
        if (n1%i == 0 && n2%i == 0){
            cout << "GCD is: " << i << endl;
            break;
        }
    }
}

void gcdhcfEuclidean(int n1, int n2){
    while(n1 > 0 && n2 > 0){
        if (n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if (n1 == 0)
        cout << "GCD is: " << n2 << endl;
    else cout << "GCD is: " << n1 << endl;
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n1, n2;
        cin >> n1 >> n2;
        gcdhcf(n1, n2);          // O(min(n1, n2))
        gcdhcfEuclidean(n1, n2); // O(log i(min(n1, n2)))
    }
}