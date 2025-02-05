/*
第一题：自动编号的客人类与文件操作
要求：

定义 Guest 类，包含自动生成的编号 Num（从1递增）、姓名 Name、房费 Fee。

静态成员 Count 记录当前入住人数，静态方法 GetTotalIncome 返回总房费。

构造函数初始化信息，Show() 输出客人信息。

创建3个 Guest 对象,输出总收入和当前人数。

示例输出（文件内容）：

Num:1 Name:Alice Fee:200
Num:2 Name:Bob Fee:300
Num:3 Name:Charlie Fee:400
Total Income:900, Current Guests:3
*/
#include<iostream>
#include<string>

using namespace std;

class Guest{
    private:
        static int Count;
        int Num;
        string Name;
        static float Fee;
    public:
      Guest(string N,float F):Name(N){Num = ++Count;Fee += F;};//构造函数
      void Show(){
          cout<<"Num:"<<Num<<endl<<"Name:"<<Name<<endl;
      };
      static float get_Fee(){return Fee;};
};

int Guest::Count = 0;
float Guest::Fee = 0;

int main(){
    Guest g1("hello",100);
    Guest g2("world",200);
    Guest g3("!",300);
    g1.Show();
    g2.Show();
    g3.Show();
    cout<<"Fee:"<<Guest::get_Fee();

}