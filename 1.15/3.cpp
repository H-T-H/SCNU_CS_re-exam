/*
3. 指针操作（难度：中）
编写一个函数 swap，使用指针交换两个整数变量的值。
*/
#include <iostream>

void swap(int *a, int *b) {
    // 在这里实现你的代码
    int temp = *a;
    *a = *b;
    *b = temp;
    //结尾
}

int main() {
    int x = 5, y = 10;
    swap(&x, &y);
    std::cout << "x: " << x << ", y: " << y << std::endl;
    return 0;
}