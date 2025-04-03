/*
4．写一个函数实现气泡排序。
*/
#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> &nums)
{
    for(int i = 0;i < nums.size();i++)
    {
        for(int j = 0;j < nums.size()-i-1;j++)
        {
            if(nums[j] > nums [j+1])
            {
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }
}

int main()
{
    vector<int> nums = {3,1,2,6,8,4,5,7,9};
    bubble_sort(nums);
    for(int num : nums)
    {
        cout<<num<<" ";
    }
}