#include<bits/stdc++.h>
using namespace std;

void printPattern19(int n){
    
    for (int i = 0; i < n; i++){

        // stars
        for (int j = 0; j < n-i; j++){
            cout << "*";
        }

        // spaces
        for (int j = 0; j < (i*2); j++){
            cout << " ";
        }

        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++){

        // stars
        for (int j = 0; j < i; j++){
            cout << "*";
        }

        // spaces
        for (int j = 0; j < (2*n) - (2*i); j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 0; j < i; j++)
        {
            cout << "*";
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
        printPattern19(n);
    }
}