/*
1. 数字处理与文件写入（考察：基本语法、循环、条件判断、文件操作）
编写一个程序，提示用户输入一系列整数，以输入 -1 作为结束标志。程序需要统计输入的正整数、负整数和零的个数，并将统计结果写入名为 "counts.txt" 的文件中。文件内容格式如下：
Positive numbers: [正整数个数]
Negative numbers: [负整数个数]
Zeros: [零的个数]
*/
#include<iostream>
#include<fstream>

int main(){
    int postive_numbers=0;
    int negative_numbers=0;
    int zeros=0;
    int input=0;
    while(1){
          std::cout<<"pls enter a series numbers";
          std::cin>>input;
          if (input == -1)    break;
          if (input > 0)    postive_numbers++;
          if (input > 0)    negative_numbers++;
          if (input == 0)    zeros++;
    }
    std::ofstream output("counts.txt");
    output<<"Positive numbers: "<<postive_numbers<<std::endl;
    output<<"Negative numbers: "<<negative_numbers<<std::endl;
    output<<"Zeros: "<<zeros<<std::endl;


}