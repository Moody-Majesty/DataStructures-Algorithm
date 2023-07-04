#include<bits/stdc++.h>
using namespace std;


void countDigits(int n){
    int cnt = 0;
    while(n > 0){
        int length = n % 10;
        cnt += 1;
        n = n / 10;
    }
    cout << "Count of digits is: " << cnt << endl;
}

void countDigits1(int n){
    int cnt = 0;
    while(n > 0){
        cnt += 1;
        n = n / 10;
    }
    cout << "Count of digits is: " << cnt << endl;
}

void countDigits2(int n){
    int cnt = (int)(log10(n) + 1);
    cout << "Count of digits is: " << cnt << endl;
}

int main(){
    int t;
    cin >> t;

    // T.C => O(log(10)n) -> as we are diving by 10
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        countDigits(n);
        countDigits1(n);
        countDigits2(n);
    }
}