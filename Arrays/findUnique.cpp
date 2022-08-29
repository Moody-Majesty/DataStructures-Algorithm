#include <iostream>
using namespace std;

void findUnique(int arr[], int size){
  int n = 0;

    for (int i=0; i<size; i++){
      n = n ^ arr[i];
    }

  cout << n << endl;
}

int main(){
  int size;
  cin >> size;

  int n[100];
  for (int i=0; i<size; i++){
    cin >> n[i];
  }

  findUnique(n, size);	
}
