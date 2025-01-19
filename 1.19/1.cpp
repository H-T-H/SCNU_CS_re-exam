/*
1. 计算阶乘和的倒数（考察：循环、函数、浮点数精度）

编写一个程序，计算以下表达式的值：

1/1! + 1/2! + 1/3! + ... + 1/n!

其中，n 是由用户输入的正整数。要求编写一个计算阶乘的函数。
*/
#include<iostream>
int factorial(int n){
    if(n==0)    return 1;
    int result = 1;
    for(int i=1;i<=n;i++){
        result *= i;
    }
    return result;
};

int main(){
    int n;
    std::cout<<"enter n:";
    std::cin>>n;
    float result = 0;
    for (int i = 1;i<=n;i++) {
        result += 1/(float)factorial(i);
    }
    std::cout<<"result:"<<result;
}