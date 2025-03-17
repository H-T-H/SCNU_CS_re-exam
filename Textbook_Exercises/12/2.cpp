/*
2．定义一个安全的动态整型数组。所谓安全，就是在数组操作中会检查下标是否越界。所谓动
态，就是定义数组时，数组的规模可以是变量。在这个类的基础上，派生出一个可指定下标
范围的安全的动态数组。
*/
#include<iostream>
#include<stdexcept>
using namespace std;
class nums{
    private:
        int length;
        int* numSet;
    public:
        nums(int n){
            numSet = new int[n];
        }
        ~nums(){
            delete[] numSet;
        }
        int& operator[](size_t index){
            if(index > length||index < 0){
                throw std::out_of_range("index out of range");
            }
            return numSet[index];
        }
};
//写的神志不清了，明天再写。