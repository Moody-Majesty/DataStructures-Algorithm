// C++ code to find
// duplicates in O(n) time
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
  
int main()
{
    int num[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };
    int arr_size = sizeof(num) / sizeof(num[0]);

    printArray(num, arr_size);
    // count the frequency
    for (int i = 0; i < arr_size; i++) {
        
        cout << i << " " << num[i] % arr_size 
        << endl;
        
        num[num[i] % arr_size]
            = num[num[i] % arr_size] + arr_size;

        printArray(num, arr_size);
    }

    cout << "The repeating elements are : " << endl;
    for (int i = 0; i < arr_size; i++) {
        if (num[i] >= arr_size * 2) {
            cout << i << " " ;
        }
    }

    return 0;
}