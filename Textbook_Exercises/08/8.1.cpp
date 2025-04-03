/*
1．用结构体表示一个复数，编写实现复数的加法、乘法、输入和输出的函数，并测试这些函数。
1 加法规则：(a+bi)+(c+di)=(a+c)+(b+d)i。
2 乘法规则：(a+bi)×(c+di)=(ac-bd)+(bc+ad)i。
3 输入规则：分别输入实部和虚部。
*/
#include<iostream>
using namespace std;

struct complex{
    float real;
    float img;
};

complex add(const complex a, const complex b){
    complex result;
    result.real = a.real + b.real;
    result.img = a.img + b.img;
    return result;
}

complex multi(const complex a, const complex b){
    complex result;
    result.real = a.real * b.real - a.img * b.img;
    result.img = a.img * b.real + a.real * b.img;
    return result;
}

void print_complex(const complex a){
    cout<<a.real;
    if(a.img<0){
        cout<<a.img<<"i"<<endl;
    }
    else if(a.img > 0){
        cout<<"+"<<a.img<<"i"<<endl;
    }
    else{
        cout<<endl;
    }
}

int main(){
    complex a,b;
    cout<<"输入第一个复数的实部:";
    cin>>a.real;
    cout<<"输入第一个复数的虚部:";
    cin>>a.img;
    cout<<"输入第二个复数的实部:";
    cin>>b.real;
    cout<<"输入第二个复数的虚部:";
    cin>>b.img;
    cout<<"\n"<<"你输入的第一个复数为:";
    print_complex(a);
    cout<<"\n"<<"你输入的第二个复数为:";
    print_complex(b);
    cout<<"\n"<<"他们的和为:";
    print_complex(add(a,b));
    cout<<"\n"<<"他们的积为:";
    print_complex(multi(a,b));
}