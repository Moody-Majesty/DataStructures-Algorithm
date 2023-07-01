#include<bits/stdc++.h>
using namespace std;

/* 
Print Pattern as below for input
 2 -> * *
      * *

 3 -> * * *
      * * *
      * * *
*/

void printPattern(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n;j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        printPattern(n);
    }
}