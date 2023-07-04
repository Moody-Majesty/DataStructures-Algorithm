#include<bits/stdc++.h>
using namespace std;


int checkPrime(int n){
    int cnt = 0;
    for (int i = 1; i * i <= n; i++){
        if (n %i ==0){
            cnt++;
            if (n / i != i)
                cnt++;
        }
    }
    return cnt;
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        int cnt = checkPrime(n);
        if (cnt == 2)
            cout << "Yes, This is Prime number" << endl;
        else
            cout << "This is not a Prime number" << endl;
    }
}