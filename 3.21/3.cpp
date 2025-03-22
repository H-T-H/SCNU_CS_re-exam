/*
题目名称: Collatz 猜想逆推

题目描述:

给定一个正整数 target，你需要模拟 Collatz 猜想的逆过程，并输出从 target 开始，通过一系列操作回到 1 的步骤。Collatz 猜想的正向过程如下：

如果当前数是偶数，则将其除以 2。

如果当前数是奇数，则将其乘以 3 再加 1。

Collatz 猜想认为，对于任意正整数，经过有限次上述操作，最终都会回到 1。

本题要求你进行逆向推导：从 target 出发，每一步你需要判断：

如果当前数 n 可以是某个数乘以 3 再加 1 的结果（即 (n - 1) 能被 3 整除，且 (n-1)/3是奇数,且n不能等于4），则上一步的数可以是 (n - 1) / 3。

如果当前数 n 可以是某个数除以 2 的结果，则上一步的数可以是n * 2。
*/

#include<iostream>
using namespace std;

void collatz(int target){
    while(target != 1){
        cout<<target<<" ";
        if(target % 2 == 0){
            target /= 2;
        }
        else{
            target = target * 3 +1;
        }
    }
    cout<<target;
}

int main(){
    collatz(100);
}