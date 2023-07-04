#include<bits/stdc++.h>
using namespace std;


void printDivisors(int n){
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            cout << i << " ";
        }
    }
    cout << endl;
}

void printDivisors1(int n){
    vector<int> ls;
    // O(sqrt(n))
    for (int i = 1; i*i <= n; i++){
        if (n % i == 0){
            ls.push_back(i);
            if ( (n / i) != i)
                ls.push_back(n / i);
        }
    }
    // O(no of factors * log(no of factors))
    sort(ls.begin(), ls.end());
    // O(no of factors)
    for (auto it : ls)
        cout << it << " ";
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        printDivisors(n);  // O(n)
        printDivisors1(n);  
    }
}