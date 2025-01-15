/*
5. 递归函数（难度：较难）
编写一个递归函数 fibonacci，计算斐波那契数列的第 n 项。 (斐波那契数列：1, 1, 2, 3, 5, 8, 13, ...)
*/
#include <iostream>

int fibonacci(int n) {
    // 在这里实现你的代码
    if (n <= 1) {
      return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fibonacci(n) << std::endl;
    return 0;
}