/*
1．创建一个LongLongInt类，用一个128个元素的字符数组存放最多128位的正整数。提供的成员
函数有构造函数（根据一个由数字组成的字符串创建一个LongLongInt类的对象）、输出函数、
加法函数、把一个LongLongInt类的对象赋给另一个对象的赋值函数。为了比较LongLongInt
对象，提供了等于比较、不等于比较、大于比较、大于等于比较、小于比较和小于等于比较。
*/
#include<string>
#include<iostream>
#include <cstring>
using namespace std;
class LongLongInt{
    private:
        char num[128];
        int lens;
    public:
        LongLongInt(char* inputNum){
            lens = strlen(inputNum);
            for(int i = 0;i<lens;i++){
                num[127-i] = inputNum[lens-1-i];
            }
        };
        void print(){
            for(int i = 128-lens;i < 128;i++){
                cout<<num[i];
            }
            cout<<endl;
        };
        void copy(const LongLongInt &other){
            for(int i = 0;i < lens;i++){
                num[127 - i] = other.num[127 - i];
            }
        };
        bool isequal(const LongLongInt other){
            if(lens != other.lens){
                return false;
            }
            for(int i = 128-lens;i<128;i++){
                if(num[i] != other.num[i]){
                    return false;
                }
            }
            return true;
        };
        bool notEqual(const LongLongInt other){
            if(lens != other.lens){
                return true;
            }
            for(int i = 128-lens;i<128;i++){
                if(num[i] != other.num[i]){
                    return true;
                }
            }
            return false;
        };
        bool largeThan(const LongLongInt other);
        bool largeEqualThan(const LongLongInt other);
        bool lessThan(const LongLongInt other);
        bool lessEqualThan(const LongLongInt other);
    }
int main(){
    char str_1[] = "1234567";
    char str_2[] = "7654321";
    LongLongInt s1(str_1);
    LongLongInt s2(str_2);
    cout<<s1.isequal(s2)<<endl;//期望输出"0"
    s1.print();//期望输出"1234567"
    s1.copy(s2);
    s1.print();//期望输出"7654321"
    cout<<s1.isequal(s2)<<endl;//期望输出"1"
}

//又臭又长，写的烦人