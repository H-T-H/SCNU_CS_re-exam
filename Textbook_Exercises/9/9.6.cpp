/*
6．试将第8章程序设计题的第3题改写成一个库。
*/
#include<numeric>
#include<iostream>
using namespace std;
class rationalT{
private:
    int num;
    int den;
public:
    //构造函数
    rationalT(int num_, int den_) : num(num_), den(den_){
        //化简
        int g = gcd(den, num);
        num /= g;
        den /= g;
    }
    rationalT huajian(rationalT& r){
        int g = gcd(r.den, r.num);
        r.num = r.num / g;
        r.den = r.den / g;
        return r;
        // 保证分母为正数，符号归一化
        if (r.den < 0) {
            r.num = -r.num;
            r.den = -r.den;
        }
    }
    rationalT operator+(rationalT other){
        rationalT destination = rationalT(num * other.den + other.num * den, den * other.den);
        return huajian(destination);
    }
    rationalT operator*(rationalT other){
        rationalT destination = rationalT(num * other.num , den * other.den);
        return huajian(destination);
    }
    //返回有理数的实型表示
    friend float GetRational(rationalT r){
        return (float)r.num/(float)r.den;
    }
    //打印
    friend void PrintRational(rationalT r){
        cout<<r.num<<"/"<<r.den<<endl;
    }
};