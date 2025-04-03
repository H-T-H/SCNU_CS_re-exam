#include<vector>
using namespace std;
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int left = 0,right = 0;
		int k = 0;
		while(right < nums.size()){
			while(nums[right] == nums[left]){
				right++;
				if(right==nums.size()){return k+1;}
			}
			k++;
			nums[k] = nums[right];
			left++;
		}
		return k+1;
	}
};