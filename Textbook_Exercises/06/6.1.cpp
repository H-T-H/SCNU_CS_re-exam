/*
1．设计一个函数，判别一个整数是否为素数。
*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x == 1||x == 0)
    {
        cout<<"result:0";
        return 0;
    }
    bool result = true;
    for(int i = 2;i <= sqrt(x);i++)
    {
        if(x%i == 0)
        {
            result = false;
        }
    }
    cout<<"result:"<<result;
}