#include<bits/stdc++.h>
using namespace std;

void printPattern15(int n){

    for (int i = 0; i < n; i++){

        for (char ch = 'A'; ch < 'A' + (n-i); ch++)
        {
            cout << ch;
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
        printPattern15(n);
    }
}