#include<bits/stdc++.h>
using namespace std;

void printName(int i, int n){
    if (i > n) {
        return;
    }
    cout << "Jay" << endl;
    printName(i+1, n); // recursive call to the function with incremented value of i
}

int main(){
    int n;
    cin >> n;
    printName(1, n);  // T.C: => O(n)     S.C => O(n)
}