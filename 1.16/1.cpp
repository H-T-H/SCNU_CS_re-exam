/*
1. 素数判断（难度：易）
编写一个函数 isPrime，接受一个整数作为输入，判断该整数是否为素数。如果是素数，返回 true；否则，返回 false。
*/

#include<iostream>
#include<cmath>
bool isPrime(int n){
    bool result = false;
    int i = std::sqrt(n);
    for(int j = 2;j <= i; j++){
        if ( n % j == 0){
            result = true;
        }
    }
    return result;
}
int main(){
    std::cout<<isPrime(7)<<std::endl<<isPrime(8)<<std::endl<<isPrime(17)<<std::endl<<isPrime(134)<<std::endl<<isPrime(34)<<std::endl;
}