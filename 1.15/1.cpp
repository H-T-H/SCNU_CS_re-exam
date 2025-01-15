/*
1. 字符串反转（难度：易）
编写一个函数 reverseString，接受一个字符串作为输入，返回反转后的字符串。
*/
#include <iostream>
#include <string>
#include <algorithm>
std::string reverseString(std::string str) {
  // 在这里实现你的代码
  std::reverse(str.begin(), str.end());
  return str;
}

int main() {
  std::string str;
  std::cin >> str;
  std::cout << reverseString(str) << std::endl;
  return 0;
}