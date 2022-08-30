/*
Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

Example 1:

Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
Example 2:

Input: arr = [1,2,3]
Output: [1,2,3]
Explanation: After calling your function, the input array is modified to: [1,2,3]
 

Constraints:

1 <= arr.length <= 104
0 <= arr[i] <= 9
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int length = 0;
        vector<int> res(arr.size());
        
        for (int i=0; i<arr.size(); i++){
            if (arr[i] == 0){
                length += 2;
                continue;
            }
            else if (length < arr.size()){
                res[length] = arr[i];
                length++;
            }
        }
        arr = res;
    }

    void duplicateZerosOptimized(vector<int>& arr) {
        int len = arr.size()-1;
        int possible_dups = 0;
        
        for (int left=0; left <= len - possible_dups; left++){
            
            if (arr[left] == 0){
                if (left == len - possible_dups){
                    arr[len] = 0;
                    len--;
                    break;
                }
                possible_dups++;
            }
        }
        
        int last = len - possible_dups;
        for(int i=last; i>=0; i--){
            if (arr[i] == 0){
                arr[i + possible_dups] = 0;
                possible_dups--;
                arr[i + possible_dups] = 0;
            }
            else{
                arr[i + possible_dups] = arr[i];
            }
        }
        
    }
};

int main(){
	
	Solution sol;
	
	vector<int> nums = {1,0,2,3,0,4,5,0};
	sol.duplicateZerosOptimized(nums);

	for (int i=0; i<nums.size(); i++){
		cout << nums[i] << ' ';
	}
	cout << endl;
	
}
