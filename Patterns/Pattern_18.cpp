#include<bits/stdc++.h>
using namespace std;

void printPattern18(int n){

    for (int i = 0; i < n; i++){

        for (char ch = 'A' + (n - i - 1); ch <= 'A' + (n-1); ch++){
            cout << ch << " ";
        }
            cout << endl;
    }
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t;i++){
        int n;
        cin >> n;
        printPattern18(n);
    }
}