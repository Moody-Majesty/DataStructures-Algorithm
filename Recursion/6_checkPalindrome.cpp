#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int i, string &s, int n){
    if (i >= n/2)
        return true;

    if (s[i] != s[n-i-1])
        return false;

    return isPalindrome(i + 1, s, n);
}

int main(){
    string s;
    cin >> s;

    int len = s.size();

    cout << isPalindrome(0, s, len) << endl;  // O(n/2)
}