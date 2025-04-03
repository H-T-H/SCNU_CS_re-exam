/*
2．用带参数的main函数实现一个完成整数运算的计算器。例如，输入
calc 5 * 3
执行结果为15。
*/

#include<iostream>
#include<cstring>
using namespace std;

int main(int argc,char *argv[]){
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[3]);
    char* op = argv[2];
    int result;
    if (strcmp(op, "+") == 0) {
        result = num1 + num2;
    } else if (strcmp(op, "-") == 0) {
        result = num1 - num2;
    } else if (strcmp(op, "*") == 0 || strcmp(op, "x") == 0) {  // 支持 * 或 x 表示乘法
        result = num1 * num2;
    } else if (strcmp(op, "/") == 0) {
        if (num2 == 0) {
            std::cout << "Error: Division by zero" << std::endl;
            return 1;
        }
        result = num1 / num2;
    } else {
        std::cout << "Error: Invalid operator. Supported: + - * x /" << std::endl;
        return 1;
    }

    // 输出结果
    std::cout << "Result: " << result << std::endl;
    return 0;
}