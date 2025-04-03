/*
快排
*/
#include<iostream>
#include<vector>
using namespace std;

void swap(vector<int>& vec,int first,int second) {
  int temp = vec[second];
  vec[second] = vec[first];
  vec[first] = temp;
}

// 划分函数
int partition(vector<int>& nums, int l, int r) {
  int pivot = nums[l]; // 选择第一个元素作为pivot
  int i = l;
  int j = r;

  while (i < j) {
    // 从右向左找到第一个小于 pivot 的元素
    while (i < j && nums[j] >= pivot) j--;

    // 从左向右找到第一个大于 pivot 的元素
    while (i < j && nums[i] <= pivot) i++;

    if (i < j) swap(nums, i, j);
  }
  // 将 pivot 放到正确的位置
  swap(nums, l, i);
  return i;
}

//快速排序函数
void quicksort(vector<int>& nums,int l,int r){
  if (l < r){
    int mid = partition(nums,l,r);
    quicksort(nums,l,mid-1);
    quicksort(nums,mid+1,r);
  }
  }


int main(){
  vector<int> A={10,7,3,1,6,8,0};
  quicksort(A,0,A.size()-1);
  for (vector<int>::iterator it = A.begin(); it != A.end(); ++it) {
    std::cout << *it << " ";
  }
}