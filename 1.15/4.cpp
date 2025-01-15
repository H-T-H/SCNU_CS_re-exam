/*
4. 类与对象（难度：中）
定义一个名为 Rectangle 的类，包含 width 和 height 两个私有成员变量，以及计算面积的公有成员函数 getArea。 在 main 函数中创建 Rectangle 对象，设置宽度和高度，并输出矩形的面积。
*/
#include <iostream>

class Rectangle {
private:
    float width;
    float height;

public:
    float getArea() const {
        return width * height;
    }
    Rectangle(float width, float height) {//构造函数
      this->width = width;
      this->height = height;
    }

};

int main() {
    Rectangle rect(5.0, 3.0);
    std::cout << "Area: " << rect.getArea() << std::endl;
    return 0;
}