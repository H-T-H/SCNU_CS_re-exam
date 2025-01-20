/*
3. 递归实现字符串反转 (考察：递归、字符串)

编写一个递归函数 reverseStringRecursive，接受一个字符串作为输入，返回反转后的字符串。要求必须使用递归实现，不能使用循环或标准库的 reverse 函数。
*/

#include <iostream>
#include <string>

std::string reverseStringRecursive(std::string str) {
    if (str.length() <= 1) {
        return str;
    } else {
        // 递归调用，先反转子串，然后将第一个字符加到末尾
        return reverseStringRecursive(str.substr(1)) + str[0];
    }
}

int main() {
    std::string str1 = "hello";
    std::string reversedStr1 = reverseStringRecursive(str1);
    std::cout << "Original: " << str1 << ", Reversed: " << reversedStr1 << std::endl;

    std::string str2 = "world";
    std::string reversedStr2 = reverseStringRecursive(str2);
    std::cout << "Original: " << str2 << ", Reversed: " << reversedStr2 << std::endl;

    std::string str3 = "a";
    std::string reversedStr3 = reverseStringRecursive(str3);
    std::cout << "Original: " << str3 << ", Reversed: " << reversedStr3 << std::endl;

    std::string str4 = "";
    std::string reversedStr4 = reverseStringRecursive(str4);
    std::cout << "Original: " << str4 << ", Reversed: " << reversedStr4 << std::endl;


    return 0;
}
//ai写的答案