/*
2．设计一个函数，使用以下无穷级数计算sinx的值。
        x  x^3 x^5 x^7
sin =     -   +   -     + ......
        1! 3!   5! 7!
。舍去的绝对值
应小于ε，ε的值由用户选择。
*/
#include<iostream>
#include<cmath>
#include<math.h>

using namespace std;

double ε = 0.0001;
double  factorial(int a)
{
    double result = 1;
    if(a == 0||a == 1)  return 1;
    for(int i = 2;i<=a;i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    double   result = 0;
    double x;
    cin>>x;
    bool add_ = true;
    int i = 1;
    while(fabs(sin(x)-result) > ε)
    {
        if(add_)
        {
            result += pow(x,i)/factorial(i);
            i+=2;
            add_ = false;
        }
        else
        {
            result -= pow(x,i)/factorial(i);
            i+=2;
            add_ = true;
        }
    }
    cout<<result;
}