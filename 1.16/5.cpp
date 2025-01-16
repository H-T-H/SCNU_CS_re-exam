/*
5. 函数重载（难度：较难）
编写两个名为 calculateArea 的重载函数，分别计算矩形和圆形的面积。矩形的面积计算函数接受两个参数（宽度和高度），圆形的面积计算函数接受一个参数（半径）。
 */
#include<iostream>
//计算圆形面积
float calculateArea(int r){
    return 3.14 * r * r;
}

//计算矩阵
float calculateArea(int a,int b){
    return a * b;
}

int main(){
    std::cout<<calculateArea(4)<<std::endl;
    std::cout<<calculateArea(2,3)<<std::endl;
}
