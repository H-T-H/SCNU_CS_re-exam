#include"9.5.cpp"
#include<iostream>
using namespace std;

int main(){
    pointT p1(5.2, 6.3);
    pointT p2(1.2, 2.1);
    pointT p3 = Midpoint(p1, p2);
    p3.display();    
}