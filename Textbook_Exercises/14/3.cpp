/*
3．编写一个程序，打印1～100的数字的平方和平方根。要求用格式化的输出，每个数字的域宽
为10，实数用小数位置占5位的精度右对齐显示。
*/
#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main(){
    for(int i = 1;i <=100;i++){
        cout<<i<<": "<<setw(10)<<fixed<<setprecision(5)<<static_cast<float>(i) * i<<" ";
        cout<<sqrt(i)<<endl;
    }
}