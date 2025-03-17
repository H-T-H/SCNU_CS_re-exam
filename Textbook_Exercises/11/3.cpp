/*
3．定义一个保存和处理N维向量空间中的向量的类型，能实现向量的输入/输出、两个向量的加
以及求两个向量点积的操作。
*/
#include<iostream>
using namespace std;
class vector{
    private:
        int N;//N维数
        int* nums;//各个维数的数值
    public:
        ~vector(){
            delete[] nums;
        }
        vector(int N,int* nums_):N(N),nums(nums_){}//构造函数
        vector operator+(const vector other){
            int* nums_ = new int[N];
            vector result(N, nums_);
            for(int i = 0;i < N; i++){
                result.nums[i] = nums[i] + other.nums[i];
            }
            return result;
        }
        vector operator*(const vector other){
            int nums_[1]={0};
            vector result = vector(1,nums_);
            for(int i = 0;i < N; i++){
                result.nums[0] += nums[i] * other.nums[i];
            }
            return result;
        }
        friend ostream& operator<<(ostream& os, vector v){
            for(int i = 0;i < v.N;i++){
                os<<v.nums[i]<<" ";
            }
            return os;
        }
};

int main(){
    int nums1[5] = {1,2,3,4,5};
    int nums2[5] = {2,3,4,5,6};
    vector v1 = vector(5,nums1);
    vector v2 = vector(5,nums2);
    cout<<v1<<endl<<v2<<endl<<v1+v2<<endl<<v1*v2;
}