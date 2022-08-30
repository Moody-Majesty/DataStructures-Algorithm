/*
Given an array nums of integers, return how many of them contain an even number
of digits.

Example 1:

Input: nums = [12,345,2,6,7896]
Output: 2
Explanation:
12 contains 2 digits (even number of digits).
345 contains 3 digits (odd number of digits).
2 contains 1 digit (odd number of digits).
6 contains 1 digit (odd number of digits).
7896 contains 4 digits (even number of digits).
Therefore only 12 and 7896 contain an even number of digits.

Example 2:

Input: nums = [555,901,482,1771]
Output: 1
Explanation:
Only 1771 contains an even number of digits.

Constraints:

1 <= nums.length <= 500
1 <= nums[i] <= 105
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	int findNumbers(vector<int> &nums) {
		int countOfEvenDigigts = 0;

		for (int i = 0; i < nums.size(); i++) {
			int digit = nums[i];

			int cnt = 0;
			while (digit != 0) {
				digit = digit / 10;
				cnt++;
			}

			if (cnt % 2 == 0) {
				countOfEvenDigigts++;
			}
		}

		return countOfEvenDigigts;
	}
};

int main() {
	Solution sol;

	vector<int> num = {1, 21, 345, 6754, 23};
	cout << sol.findNumbers(num) << endl;
}
