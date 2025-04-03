/*
6．编写一个程序求
30
∑n!
n=1 ，要求只做n次乘法和n次加法。
*/
#include<iostream>
using namespace std;
int main()
{
    double init_num = 1;
    double result = 0;
    for(int i = 1;i<=30;i++)
    {
        init_num *= i;
        result += init_num;
    }
    cout<<result;
}