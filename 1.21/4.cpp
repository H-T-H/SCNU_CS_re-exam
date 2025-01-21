/*4. 继承与虚函数应用 (考察：继承、虚函数、多态)

定义一个抽象类 Shape，包含一个纯虚函数 calculateArea()，返回一个 double 类型的值。

定义三个类 Circle，Rectangle 和 Triangle 继承自 Shape，并实现各自的 calculateArea() 函数。这些类需要包含各自所需的必要数据成员（例如：半径，长宽，底高）。

在 main 函数中，创建一个 Shape 指针数组，并用 Circle，Rectangle 和 Triangle 对象进行初始化。然后循环调用数组中每个元素的 calculateArea() 函数，并输出结果 (展示多态性)。
 */
#include<iostream>

using namespace std;

class Shape{
    public:
      virtual double calculateArea() = 0;
};

class Circle:public Shape{
    private:
      double r;
    public:
        Circle(double radius):r(radius){};
        double calculateArea(){return 3.14*r*r;}
};

class Rectangle:public Shape{
    private:
        double l;
        double w;
    public:
        Rectangle(double length, double width) : l(length),w(width){};
        double calculateArea(){return l*w;}
};

class Triangle:public Shape{
    private:
        double b;
        double h;
    public:
        Triangle(double base,double height):b(base),h(height){};
        double calculateArea(){return b*h/2;}
};
//主程序ai写的
int main() {
    // 创建 Shape 指针数组，并用 Circle，Rectangle 和 Triangle 对象进行初始化
    Shape* shapes[3];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Triangle(3.0, 8.0);

    // 循环调用数组中每个元素的 calculateArea() 函数，并输出结果
    for (int i = 0; i < 3; ++i) {
        cout << "Area of shape " << i + 1 << ": " << shapes[i]->calculateArea() << endl;
    }

    // 释放动态分配的内存，防止内存泄漏
    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}