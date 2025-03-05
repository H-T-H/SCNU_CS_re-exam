#include<vector>
using namespace std;
class Solution {
public:
	int mid_search(vector<int>& nums, int left, int right, int target) {
		if (nums[(left + right) / 2] == target)
			return (left + right) / 2;
		if (nums[(left + right) / 2] != target && left == right) {
			if (nums[(left + right) / 2] < target)
				return left + 1;
			else
				return left;
		};
		if (nums[(left + right) / 2] > target){
			if ((left + right) / 2 - 1 >= left)  return mid_search(nums, left, (left + right) / 2 - 1, target);
			else return mid_search(nums,left,left,target);
		}
		else
			return mid_search(nums, (left + right) / 2 + 1, right, target);
	}
	int searchInsert(vector<int>& nums, int target) {
		return mid_search(nums, 0, nums.size() - 1, target);
	}
};