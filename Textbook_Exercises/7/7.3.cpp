/*
3．编写一个函数，判断作为参数传入的一个整型数组是否为回文。例如，若数组元素值为10、
5、30、67、30、5、10就是一个回文。
*/
#include<vector>
#include<iostream>
using namespace std;

bool ishuiwen(vector<int> nums){
    int left = 0,right = nums.size()-1;
    while(left < right){
        if(nums[left] != nums[right]){
            return false;
        }
        left++,right--;
    }
    return true;
}

int main(){
    vector<int> nums = {10,5,30,67,30,5,10};
    if(ishuiwen(nums)){
        cout<<"是回文数";
    }
    else{
        cout<<"不是回文数";
    }

}