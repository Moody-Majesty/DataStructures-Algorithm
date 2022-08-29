#include <iostream>
using namespace std;

int findMax(int arr[], int size){

  int maxi = 0;
  for (int i=0; i<size; i++){
    maxi = max(maxi, arr[i]);
    //if (arr[i] > max){
    //  max = arr[i];
    //}
  }
  return maxi;
}

int findMin(int arr[], int size){

  int mini = 1;
  for (int i=0; i<size; i++){
    mini = min(mini, arr[i]);
    //if (arr[i] < min){
    //  min = arr[i];
    //}
  }
  return mini;
}

void print(int arr[], int size){

  for (int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void sum(int arr[], int size){
  int sum=0;
  for (int i=0; i<size; i++){
    sum += arr[i];
  }
  cout << "Sum is: " << sum << endl;
}

void reverse(int arr[], int size){
  int s=0, e=size-1;

  while(s<=e){
    swap(arr[s], arr[e]);
    s++;
    e--;
  }

  for (int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverseAlt(int arr[], int size){
  int s = 0, e = 1;

  while(e<size){
    //cout << arr[s] << " " << arr[e] << endl;
    swap(arr[s], arr[e]);
    s += 2;
    e += 2;
  }

  for (int i=0; i<size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void unique(int arr[], int size){
  int n = 0;

	for (int i=0; i<size; i++){
		n = n ^ arr[i];
	}

	cout << n << endl;
}

int main() {

  int size;
  cin >> size;
  
  int n[1000];
  for (int i=0; i<size; i++){
    cin >> n[i];
  }

  //int maxi, mini;
  //maxi = findMax(n, size);
  //mini = findMin(n, size);
  //cout << "Max is : " << maxi << endl;
  //cout << "Min is : " << mini << endl;
  sum(n, size);
  print(n, size);
  reverse(n, size);
  reverseAlt(n, size);
	unique(n, size);

  //cout << sizeof(n) << endl;
}