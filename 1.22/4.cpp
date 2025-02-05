/*
第四题：十进制转二进制补码文件存储
要求：

输入整数 n（可能为负数），将其转换为 32位二进制补码 形式。

自定义函数 string toBinary(int n) 实现转换。

将二进制字符串写入 binary.txt，每行一个数。

样例输入：
5
-3

样例输出（文件内容）：
00000000000000000000000000000101
11111111111111111111111111111101
 */

#include<string>
#include<iostream>
using namespace std;

string toBinar(int n){
  string result;
  if(n>0){
    for(int i = 31;i>=0;i--){
        result.append("%d",n%2);
        n /= 2;
    }
  }
  return result;
}

int main(){
  cout<<toBinar(1);
}

