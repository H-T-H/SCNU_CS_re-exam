/*
2．在数学中，有一个非常著名的斐波那契数列，它是按13世纪意大利著名数学家Leonardo Fibonacci的名字命名的。这个数列的前两个数是0和1，之后每一个数是它前两个数的和。
因此斐波那契数列的前几个数为：
F0=0
F1=1
F2=1 （0+1）
F3=2 （1+1）
F4=3 （1+2）
F5=5 （2+3）
F6=8 （3+5）
编写一个程序，顺序显示F0到F15。
*/
#include<iostream>
using namespace std;

int x(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return x(n-2)+x(n-1);
    }
}

int main(){
    for(int i = 0;i<=15;i++)
    {
        cout<<x(i)<<endl;
    }
}