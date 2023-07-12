#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z'){
        cout << "Lower case" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z'){
        cout << "Upper case" << endl;
    }
    else if (ch >= '0' && ch <= '9'){
        cout << "Digit" << endl;
    }

    int a = 0;
    int b = 0;
    int c = a & b;
    cout << c << endl;
    return 0;
}