#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cout << "Hey Jay" << endl;

    // Input Output
    int x, y;
    cin >> x >> y;
    cout << "Value of x : " << x << " and y : " << y << endl;
    cout << "Sum of x and y is: " << x + y << endl;

    // int, long, long long, float, double
    int a = 5;
    cout << "Value of a : " << a << endl;

    long b = 20000000;
    cout << "Value of b : " << b << endl;

    long long c = 3000000000000000009;
    cout << "Value of c : " << c << endl;

    float f = 4.9;
    cout << "Value of f : " << f << endl;

    double d = 45.12;
    cout << "Value of d : " << d << endl;

    // string and getline
    string s1, s2;
    //cin >> s1 >> s2;
    cout << "Value of s1 and s2  : " << s1 << " " << s2 << endl;

    string str;
    //getline(cin, str);
    cout << "Value of str : " << str << endl;

    // char
    char ch = 'j';
    cout << ch << endl;

    // if else
    // w.a.p to check if user is adult or not

    int age = 5;
    //cin >> age;

    if (age >= 18){
        cout << "You are an adult!" << endl;
    }
    else{
        cout << "You aren't yet." << endl;
    }


    // Arrays
    int num[5];

    num[1] = 43;
    num[4] = 21;

    cout << num[1] << num[4] << endl;

    // String
    string s = "Jay";

    cout << s[0] << s.size() << endl;

    return 0;
}