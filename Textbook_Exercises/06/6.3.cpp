/*
3．写一个函数stringCopy将一个字符串复制到另一个字符串。
*/
#include<iostream>
#include<string>
using namespace std;

void stringCopy(string &str_1,string &str_2)
{
    str_2 = str_1;
}

int main()
{
    string str_1 = "Hello,World!";
    string str_2 = "";
    stringCopy(str_1,str_2);
    cout<<str_2;
}