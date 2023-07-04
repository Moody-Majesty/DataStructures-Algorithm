#include<bits/stdc++.h>
using namespace std;


int armStrong(int n){
    int sum = 0;
    while(n > 0){
        int rem = n % 10;
        sum = sum + (rem * rem * rem);
        n /= 10;
    }
    return sum;
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int sum = armStrong(n);
        if (sum == n)
            cout << "Yes, This is ArmStrong number" << endl;
        else
            cout << "This is not a ArmStrong number" << endl;
    }
}