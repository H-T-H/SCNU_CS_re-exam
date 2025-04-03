/*
有一个函数，其定义如下：
x<1时，         等于x
x>=1&&x<10时，  等于2x-1
x>=10时，       等于3x-11
编一程序，输入x，输出y。
*/
#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x<1)
    {
        cout<<x;
        return 0;
    }
    else if(x>=1&&x<10){
        cout<<2*x-1;
        return 0;
    }
    else{
        cout<<3*x-11;
        return 0;
    }
}