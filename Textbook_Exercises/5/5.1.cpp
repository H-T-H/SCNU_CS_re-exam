/*
1．因为每个裁判在评判成绩时都存在主观因素，所以通常在计算一个运动员的成绩时是按如下
方法计算的：去掉一个最高分，去掉一个最低分，然后取剩余的数的平均值。编写一个程序
实现读入7个裁判的记分值，然后去掉一个最高分，去掉一个最低分，求剩余元素的平均值。
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums;
    int temp;
    int sum = 0;
    for(int i = 0; i < 7; i++ )
    {
        cin>>temp;
        nums.push_back(temp);
    }
    sort(nums.begin(),nums.end());
    for(int i = 1;i< 6;i++)
    {
        sum += nums[i];
    }
    cout<<sum/5;
}