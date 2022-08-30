/*
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.

 

Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 5000
0 <= nums[i] <= 5000
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l = nums.size();
        int s = 0;
        int e = l - 1;
        
        while(s<=e){
            
            if (nums[s] % 2 != 0 && nums[e] % 2 == 0){
                swap(nums[s], nums[e]);
                s++;
                e--;
            }
            else if(nums[s] % 2 != 0 && nums[e] % 2 != 0){
                e--;
            }
            else{
                s++;
            }
        }
        return nums;
    }
};

int main(){
	Solution sol;

	vector<int> num = {3,1,2,4};
	sol.sortArrayByParity(num);

	for (int i=0; i<num.size(); i++){
		cout << num[i] << ' ';
	}
	cout << endl;
}
