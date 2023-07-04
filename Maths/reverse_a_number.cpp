#include<bits/stdc++.h>
using namespace std;


void reverseNumber(int n){
    int revNum = 0;
    while(n > 0){
        int rem = n % 10;
        revNum = (revNum * 10) + rem;
        n /= 10;
    }
    cout << "Reversed number is: " << revNum << endl;
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        reverseNumber(n);
    }
}