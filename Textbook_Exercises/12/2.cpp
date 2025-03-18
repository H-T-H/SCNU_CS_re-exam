#include<iostream>
#include<stdexcept>
using namespace std;

class nums{
    private:
        int length;
        int* numSet;
    public:
        nums(int n){
            length = n - 1;  // 修复：初始化length
            numSet = new int[n];
        }
        ~nums(){
            delete[] numSet;
        }
        int& operator[](size_t index){
            if(index > length || index < 0){
                throw std::out_of_range("index out of range");
            }
            return numSet[index];
        }
};

class safenums : public nums{
    public:
        safenums(int size, int l, int r) : nums(size) {  // 修复：添加构造函数
            left = l;
            right = r;
        }
        int& operator[](size_t index){
            if(index > right || index < left){
                throw out_of_range("index out of range");
            }
            return nums::operator[](index);  // 修复：返回基类的operator[]结果
        }
    private:
        int left, right;
};

int main() {
    try {
        // 测试基础数组类
        nums arr1(5);
        cout << "Testing nums class:" << endl;
        
        // 正常赋值和访问
        arr1[0] = 10;
        arr1[4] = 50;
        cout << "arr1[0] = " << arr1[0] << ", arr1[4] = " << arr1[4] << endl;
        
        // 测试越界
        try {
            arr1[5] = 60;  // 这应该抛出异常
        } catch (out_of_range& e) {
            cout << "Caught exception: " << e.what() << endl;
        }

        // 测试安全数组类
        safenums arr2(5, 1, 3);  // 创建大小为5，但只允许访问索引1-3的数组
        cout << "\nTesting safenums class:" << endl;
        
        // 正常赋值和访问
        arr2[1] = 100;
        arr2[3] = 300;
        cout << "arr2[1] = " << arr2[1] << ", arr2[3] = " << arr2[3] << endl;
        
        // 测试越界
        try {
            arr2[0] = 0;  // 这应该抛出异常，因为小于允许的最小索引
        } catch (out_of_range& e) {
            cout << "Caught exception: " << e.what() << endl;
        }
        
    } catch (exception& e) {
        cout << "Unexpected error: " << e.what() << endl;
    }
    
    return 0;
}