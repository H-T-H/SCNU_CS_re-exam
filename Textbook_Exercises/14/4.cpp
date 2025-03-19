/*
4．编写一个程序，打印所有英文字母（包括大小写）的ASCII值。要求对于每个字符，程序都要
输出它对应的ASCII值的十进制、八进制和十六进制表示。
*/
#include<iostream>
using namespace std;

int main(){

    for(int i = 'a';i <= 'z';i++){
        cout<<(char)i<<":"<<"十进制:"<<dec<<i<<"八进制:"<<" "<<oct<<i<<"十六进制:"<<" "<<hex<<i<<endl;
    }

    for(int i = 'A';i <= 'Z';i++){
        cout<<(char)i<<":"<<"十进制:"<<dec<<i<<"八进制:"<<" "<<oct<<i<<"十六进制:"<<" "<<hex<<i<<endl;
    }
}