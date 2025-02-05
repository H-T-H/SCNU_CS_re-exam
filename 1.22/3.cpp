/*
第三题：多态图形类计算面积与周长
要求：

抽象类 Shape 含纯虚函数 Input()、Show()、Area()、Perimeter()。

派生类 Circle、Rectangle、Triangle 实现具体功能。

动态创建不同图形对象，基类指针管理，遍历计算总面积和总周长。

输入示例：
Circle(r=2)
Rectangle(3,4)

输出示例：
Total Area: 12.56 + 12 = 24.56
Total Perimeter: 12.56 + 14 = 26.56
 */
#include<iostream>

class Shape{
  public:
    virtual void Input()=0;
    virtual void Show()=0;
    virtual double Area()=0;
    virtual double Perimeter()=0;
};

class Circle:public Shape{
    private:
      int r;
    public:
      Circle(int r_):r(r_){}//构造函数
};

//不想做了