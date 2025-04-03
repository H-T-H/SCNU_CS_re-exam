/*
2．编写函数Midpoint(p1, p2)，返回线段p1、p2的中点。函数的参数及结果都应该为pointT
类型，pointT的定义如下：
struct pointT {
    double x, y;
};
*/
#include<iostream>
using namespace std;
struct pointT{
    double x, y;
    pointT(double x = 0, double y = 0):x(x),y(y){}
};

pointT Midpoint(pointT p1, pointT p2){
    return pointT((p1.x + p2.x)/2,(p1.y + p2.y)/2);
}

int main(){
    pointT p1 = pointT(3, 5);
    pointT p2 = pointT(5,-1);
    pointT p3 = Midpoint(p1, p2);
    cout<<"p3:("<<p3.x<<", "<<p3.y<<")";
}