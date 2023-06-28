#include<bits/stdc++.h>
using namespace std;

void printName(string name){
    cout << "Hello, "<< name <<"!"<< endl;
}

int sum(int num1, int num2){
    return (num1 + num2);
}

// pass by value
void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// pass by reference
void doSomethingAgain(int &num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main()
{
    // Functions are set of code which performs something for you
    // It is used to modularise code
    // increases readability
    // can be used to use same code multiple times
    // void -> doesn't returns anything
    // return -> returns answer
    // parameterised -> arguments can be passed
    // non-parameterised -> no arguments can be passed

    string name;
    cin >> name;
    printName(name);


    int num1, num2;
    cin >> num1 >> num2;
    cout << sum(num1, num2) <<endl;

    // pass by value
    // original value(variable address) won't be passed
    // copy of a variable will be passed
    int num = 10;
    doSomething(num);
    cout << num << endl;

    // pass by reference
    // original value(variable address) will be passed
    int new_num = 100;
    doSomethingAgain(new_num);
    cout << new_num << endl;

    return 0;
}