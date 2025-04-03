/*
5．试将第8章程序设计题的第2题改写成一个库。
*/
#include<iostream>
using namespace std;
class pointT{
public:
    pointT(double x_, double y_): x(x_),y(y_){}//构造函数
    friend pointT Midpoint(pointT p1, pointT p2){
        return pointT((p1.x + p2.x)/2,(p1.y + p2.y)/2);
    }
    void display(){
        cout<<"("<<x<<", "<<y<<")";
    }
private:
    double x;
    double y;
};