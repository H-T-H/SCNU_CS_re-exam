/*
4．编写一个程序，用于水果店售货员结账。已知苹果每斤2.50元，鸭梨每斤1.80元，香蕉每斤2
元，橘子每斤1.60元。要求输入各种水果的重量，打印应付钱数。再输入顾客付款数，打印
应找的钱数。
*/
#include<iostream>
using namespace std;
float apple     = 2.50;
float pine      = 1.80;
float banana    = 2.0;
float orange    = 1.60;
float paid      = 0;
int main(){
    float apple_num,pine_num,banana_num,orange_num;
    cout<<"how many apple you buy:";
    cin>>apple_num;
    cout<<"how many pine you buy:";
    cin>>pine_num;
    cout<<"how many banana you buy:";
    cin>>banana_num;
    cout<<"how many orange you buy:";
    cin>>orange_num;
    float prices = apple_num *2.5+pine_num*1.8+banana_num*2.0+orange_num*1.6;
    cout<<"you should pay:"<<prices<<endl;
    cout<<"you give me :";
    cin>>paid;
    cout<<"i give you "<<paid - prices;
}