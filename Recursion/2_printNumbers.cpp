#include<bits/stdc++.h>
using namespace std;

void printNumbers(int i, int n){
    if (i == 0) {
        return;
    }
    //cout << i << endl;  // // To print in decreasing order
    printNumbers(i-1, n); // recursive call to the function with incremented value of i
    cout << i << endl;    // To print in increasing order
}

int main(){
    int n;
    cin >> n;
    printNumbers(n, n);  // T.C: => O(n)     S.C => O(n)
}