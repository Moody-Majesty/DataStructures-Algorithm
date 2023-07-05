#include<bits/stdc++.h>
using namespace std;

void sumOfNumbers(int i, int sum){
    if (i == 0) {
        cout << sum << endl;
        return;
    }
    
    sumOfNumbers(i-1, sum + i); // recursive call to the function with incremented value of i
    
}

int sumOfNumbers1(int n){
    if (n == 0)
        return 0;
    return n + sumOfNumbers1(n - 1);
}

int main(){
    int n;
    cin >> n;
    sumOfNumbers(n, 0);  // T.C: => O(n)     S.C => O(n)
    cout << sumOfNumbers1(n) << endl;
}