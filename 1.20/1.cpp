/*
1. 进制转换与校验和计算 (考察：进制转换、位运算)

编写一个程序，接受一个十六进制字符串作为输入 (例如 "A3F2")。程序需要完成以下两个操作：

转换为十进制： 将输入的十六进制字符串转换为对应的十进制整数，并输出。

计算校验和： 对转换后的十进制数，按位求和（例如，如果十进制数是 1234，校验和就是 1 + 2 + 3 + 4 = 10），并输出校验和。

注意： 输入的十六进制字符串保证合法。需要自行实现十六进制到十进制的转换功能，不要使用标准库的转换函数。
 */
#include<iostream>
#include<string>
#include<cmath>

int hexToDecimal( std::string& hexStr) {
    int hexNumber=0;
    for (int i =hexStr.size()-1;i>=0;i--) {
        if ((int)hexStr[i]>=65) {
            hexNumber += ((int)hexStr[i]-55)*std::pow(16,hexStr.size()-i-1);
        }
        else {
            hexNumber += (((int)hexStr[i])-'0')*std::pow(16,hexStr.size()-i-1);
        }
    }
    return hexNumber;
}

// 计算校验和函数
int calculateChecksum(int num) {
    int checksum=0;
    for (;num>=10;num /=10) checksum +=(num%10);
    checksum += num;
    return checksum;
}


int main(){
    std::string input;
    std::cout<<"enter a number in 0x:";
    std::cin>>input;

    std::cout<<"decimal:"<<hexToDecimal(input)<<std::endl;
    std::cout<<"checksum:"<<calculateChecksum(((int)hexToDecimal(input)))<<std::endl;
    return 0;
}