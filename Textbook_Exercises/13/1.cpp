/*
1．设计一个处理栈的类模板，要求该模板用一个数组存储栈的元素。数组的初始大小由模板参
数指定。当栈中的元素个数超过数组大小时，重新申请一个大小为原来数组一倍的新数组存
放栈元素。
*/
#include<stdexcept>
using namespace std;
template <typename T>
class stack{
    private:
        T* nums;
        int scope;
        int curr;
    public:
        stack(int scope):scope(scope){
            nums = new T[scope];
            curr = 0;
        }
        ~stack(){
            delete[] nums;
        }
        void push(T num){
            if(curr == scope){
                scope *= 2;
                T* newNums = new T[scope];
                for(int i = 0;i < scope/2;i++){
                    newNums[i] = nums[i];
                }
                delete[] nums;
                nums = newNums;
            }
            nums[curr++] = num;
        }
        T pop(){
            if(curr <= 0){
                throw out_of_range("out of range");
            }
            else{
                curr -=1;
                return nums[curr];
            }
            }
    };