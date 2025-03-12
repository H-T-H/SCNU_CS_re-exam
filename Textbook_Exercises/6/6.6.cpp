/*
6．设计一个二分查找的递归函数。
*/
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> nums,int left ,int right,int target)
{
    if(left == right && nums[left] == target)
    {
        return left;
    }
    int mid = (left+right)/2;
    if(nums[mid] == target)
    {
        return mid;
    }
    else if(nums[mid] > target)
    {
        return search(nums,left,mid-1,target);
    }
    else{
        return search(nums,mid+1,right,target);
    }
}

int main()
{
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10,15,19,21};
    cout<<search(nums,0,nums.size()-1,21);
}