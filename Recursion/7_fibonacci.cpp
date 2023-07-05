#include<bits/stdc++.h>
using namespace std;

int getFibonacci(int n){
    if (n <= 1)
        return n;
    return getFibonacci(n - 1) + getFibonacci(n - 2);
}

int main(){
    int n;
    cin >> n;

    cout << getFibonacci(n) << endl;  // almost nearly O(2^n) 
}