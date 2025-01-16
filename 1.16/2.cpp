/*
2. 动态数组分配（难度：中）
编写一个程序，动态分配一个大小为 n 的整数数组，从用户输入读取 n 个整数，并将它们存储在数组中。最后，打印数组中的所有元素并释放分配的内存。
*/
#include<iostream>

int main(){
    int n;
    std::cout<<"pls enter n:";
    std::cin>>n;
    int *A = new int[n];
    for (int i = 0;i < n;i++) {
        std::cin>>A[i];
    }
    for (int i = 0;i < n;i++) {
        std::cout<<A[i]<<std::endl;
    }
    delete[] A;
}