/*
1．从键盘输入3个整数，输出其中的最大值、最小值和平均值。
*/
#include<iostream>
using namespace std;

int max(int a, int b, int c){
    if(a>=b&&a>=c)    return a;
    if(b>=a&&b>=c)    return b;
    if(c>=a&&c>=b)    return c;
}

int min(int a, int b, int c){
    if(a<=b&&a<=c)    return a;
    if(b<=a&&b<=c)    return b;
    if(c<=a&&c<=b)    return c;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;

    cout<<"max:"<<max(a,b,c)<<endl;
    cout<<"mix:"<<min(a,b,c)<<endl;
    cout<<"avg:"<<(a+b+c)/3<<endl;
}