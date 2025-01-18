/*5. 找零钱问题（考察：逻辑思维、循环、数组）

假设有面额为 1 元、5 元、10 元、20 元、50 元和 100 元的人民币。编写一个程序，当用户输入一个需要支付的总金额和一个用户支付的金额后，计算并输出找零方案，要求找零的纸币张数最少。

例如：

输入总金额：88，支付金额：100

输出：找零：1 张 10 元，2 张 1 元

*/
#include<iostream>
int main(){
    int m,n;
    std::cout<<"pls enter number of total:";
    std::cin>>m;
    std::cout<<"pls enter number of you pay:";
    std::cin>>n;
    int left = n - m;
    int hundred=0,fifty=0,twenty=0,ten=0,five=0,one=0;
    while(1){
        if (left >= 100){
            left -=100;
            hundred++;
        }
        else    break;
    }
    while(1){
        if (left >= 50){
            left -=50;
            fifty++;
        }
        else    break;
    }
    while(1){
        if (left >= 20){
            left -=20;
            twenty++;
        }
        else    break;
    }
    while(1){
        if (left >= 10){
            left -=10;
            ten++;
        }
        else    break;
    }
    while(1){
        if (left >= 5){
            left -=5;
            five++;
        }
        else    break;
    }
    while(1){
        if (left >= 1){
            left -=1;
            one++;
        }
        else    break;
    }
    std::cout<<"give you:"<<std::endl;
    if (hundred != 0)        std::cout<<"hundred:"<<hundred<<std::endl;
    if (fifty != 0)          std::cout<<"fifty:"<<fifty<<std::endl;
    if (twenty != 0)         std::cout<<"twenty:"<<twenty<<std::endl;
    if (ten != 0)            std::cout<<"ten:"<<ten<<std::endl;
    if (five != 0)    std::cout<<"five:"<<five<<std::endl;
    if (one != 0)    std::cout<<"one:"<<hundred<<std::endl;

}