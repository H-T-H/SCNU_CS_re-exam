#include<iostream>
#include<vector>
using namespace std;

int quicksort_utils(vector<int>& nums , int left, int right){
    int pivot_index = left;
    int pivot = nums[left];
    int temp;
    while(left < right){
        while(left < right && nums[right] >= pivot){
            right--;
        }
        while(left < right && nums[left] <= pivot){
            left++;
        }
        if(left < right){
            temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
        }
    }
    temp = nums[pivot_index];
    nums[pivot_index] = nums[right];
    nums[right] = temp;
    return left;
}

void quicksort(vector<int>& nums, int left, int right){
    if(left >= right){
        return;
    }
    int mid = quicksort_utils(nums, left, right);
    quicksort(nums,left, mid -1);
    quicksort(nums,mid + 1, right);
}

int main(){
    vector<int> nums = {5,4,3,2,1};
    quicksort(nums,0,nums.size()-1);
    for(auto i: nums){
        cout<<i<<" ";
    }
    return 0;
}