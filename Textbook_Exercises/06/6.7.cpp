/*
7．设计一个支持整型、实型和字符型数据的快速排序的函数模板。
*/
#include<iostream>
#include<vector>
using namespace std;

template <typename T>
int partition(vector<T>& nums,int low, int high)
{
    T pivot = nums[low]; // 选择枢纽点
    int left = low, right = high;
    while (left < right)
    {
        while (left < right && nums[right] >= pivot) // 从右向左找比pivot小的
            right--;
        nums[left] = nums[right];
        while (left < right && nums[left] <= pivot) // 从左向右找比pivot大的
            left++;
        nums[right] = nums[left];
    }
    nums[left] = pivot; // 放回枢纽点
    return left; // 返回枢纽点位置
}

template <typename T>
void quicksort(vector<T>& nums, int low, int high)
{
    if (low < high)
    {
        int pivotIndex = partition(nums, low, high);
        quicksort(nums, low, pivotIndex - 1);
        quicksort(nums, pivotIndex + 1, high);
    }
}

int main()
{
    vector<char> char_collects = {'g', 'f', 'e', 'd', 'c', 'b', 'a'};
    quicksort(char_collects, 0, char_collects.size() - 1);
    for (char ch : char_collects)
    {
        cout << ch << " ";
    }
    cout << endl;
    vector<int> int_collects = {7, 3, 5, 8, 2, 9, 1};
    quicksort(int_collects, 0, int_collects.size() - 1);
    for (int num : int_collects)
    {
        cout << num << " ";
    }
    cout << endl;
    vector<double> double_collects = {7.5, 3.2, 5.8, 8.1, 2.4, 9.7, 1.6};
    quicksort(double_collects, 0, double_collects.size() - 1);
    for (double num : double_collects)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
