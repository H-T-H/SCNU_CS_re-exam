/*
5．设计一函数求两个正整数的最大公约数。
*/

#include<iostream>
using namespace std;

int GCD(int a,int b)
{

    int result = 1;
    int min;
    if(a>b) min = b;
    else    min = a;
    for(int i = 2;i <= min;i++)
    {
        if(a%i==0 && b%i==0 && result < i)
        {
            result = i;
        }
    }
    return result;
}

int main()
{
    int a = 120,b = 32;
    cout<<GCD(a,b);
}