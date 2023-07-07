#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;

    int hash[26] = {0};
    /*
     To support all chars we can take size of array 256
    and not required to do subtraction of 'a' for small chars
    and subtraction of 'A' for caps
    */
    
    // pre compute
    for (int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;

    while(q--){
        char ch;
        cin >> ch;
        cout << hash[ch - 'a'] << endl;
    }

    return 0;
}