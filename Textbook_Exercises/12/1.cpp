/*
1．定义一个Shape类记录任意形状的位置，在Shape类的基础上派生出一个Rectangle类和一个
Circle类，在Rectangle类的基础上派生出一个Square类，必须保证每个类都有计算面积和
周长的功能。
*/
#include<iostream>
class Shape{
public:
    virtual float calcArea() = 0;
    virtual float calclength() = 0;
    virtual ~Shape(){};
};

class  Rectangle:public Shape{
private:
    float chang;
    float width;
public:
    Rectangle(float chang, float width):chang(chang),width(width){}
    float calcArea() override{
        return chang*width;
    }
    float calclength() override{
        return 2*(chang+width);
    }
};

class Square:public Rectangle{
public:
    Square(float r):Rectangle(r,r){};
};

// 测试用例
int main() {
    Shape* shapes[3];

    shapes[0] = new Rectangle(4.0, 5.0);
    shapes[1] = new Square(4.0);

    for (int i = 0; i < 2; i++) {
        std::cout << "Shape " << i + 1 << ":\n";
        std::cout << "Area: " << shapes[i]->calcArea() << "\n";
        std::cout << "Perimeter: " << shapes[i]->calclength() << "\n\n";
        delete shapes[i]; // 释放内存
    }

    return 0;
}