/*
3．可以用两个整数的商表示的数称为有理数。因此1.25是一个有理数，它等于5除以4。很多数
不是有理数，比如π和2的平方根。在计算时，使用有理数比使用浮点数更有优势：有理数是
精确的，而浮点数不是。因此，设计一个专门处理有理数的工具是非常有用的。
z 试定义类型rationalT，用来表示一个有理数。
z 函数CreateRational(num, den)，返回一个rationalT类型的值。
z 函数AddRational(r1,r2)，返回两个有理数的和。有理数的和可以用下面的方程来表示：
z 函数MultiplyRational(r1,r2)，返回两个有理数的乘积。乘积可以用下面的方程来表示：
z 函数GetRational(r)，返回有理数r的实型表示。
z 函数PrintRational(r)，以分数的形式将数值显示在屏幕上。
关于有理数的所有计算结果都应化到最简形式，例如，1/2乘以2/3的结果应该是1/3而不是2/6。
*/
#include<iostream>
#include<numeric>
using namespace std;

struct rationalT{
    int num;
    int den;
};

//化简
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
//创建
rationalT CreateRational(int num, int den){
    rationalT destination;
    destination.num = num;
    destination.den = den;
    return huajian(destination);
}
//相加
rationalT AddRational(rationalT r1, rationalT r2){
    rationalT destination;
    destination.num = r1.num*r2.den + r2.num*r1.den;
    destination.den = r1.den * r2.den;
    return huajian(destination);
}
//相乘
rationalT MultiplyRational(rationalT r1, rationalT r2){
    rationalT destination;
    destination.num = r1.num * r2.num;
    destination.den = r1.den * r2.den;
    return huajian(destination);
}
//返回有理数的实型表示
float GetRational(rationalT r){
    return (float)r.num/(float)r.den;
}
//打印
void PrintRational(rationalT r){
    cout<<r.num<<"/"<<r.den<<endl;
}

int main() {
    // 创建有理数
    rationalT r1 = CreateRational(1, 2);
    rationalT r2 = CreateRational(2, 3);
    rationalT r3 = CreateRational(-4, 6); // 测试负数化简

    // 打印测试
    cout << "r1: "; PrintRational(r1);
    cout << "r2: "; PrintRational(r2);
    cout << "r3: "; PrintRational(r3); // 预期：-2/3

    // 测试加法
    rationalT sum = AddRational(r1, r2);
    cout << "r1 + r2 = "; PrintRational(sum); // 预期：7/6

    // 测试乘法
    rationalT product = MultiplyRational(r1, r2);
    cout << "r1 * r2 = "; PrintRational(product); // 预期：1/3

    // 测试浮点转换
    cout << "r1 as float: " << GetRational(r1) << endl; // 预期：0.5

    return 0;
}