/*
2、给出一个八进制串，转换成十进制
*/
#include<string>
#include<math.h>
#include<iostream>

using namespace std;

int octToDec(string str){
    int lens = str.length();
    int result = 0;
    for(int i = 0;i < lens;i++){
        result += ((int)str[i]-48) *  pow(8,lens - i-1);
    }
    return result;
}

int main(){
    string str = "12";
    cout<<octToDec(str);
}