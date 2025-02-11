/*运算符重载与复数运算（考察：类、运算符重载）

定义一个表示复数的类 Complex，包含实部和虚部两个私有成员变量。重载该类的加法运算符 + 和输出运算符 <<，使得可以进行复数的加法运算，并将复数以 a+bi 或 a-bi 的形式输出。
*/
#include<iostream>
class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double r=0.0, double i=0.0):real(r),imag(i){};
        Complex operator+(const Complex& other) const{
            return Complex(real + other.real, imag + other.imag);
        };

        friend std::ostream& operator<<(std::ostream& os, const Complex& c){
            if(c.imag<0)    os<<c.real<<c.imag<<"i";
            else            os<<c.real<<"+"<<c.imag<<"i";
            return os;
        };

};

int main(){
    Complex a(1,2);
    Complex b(2,3);
    Complex c = a + b;
    std::cout<<"a="<<a<<std::endl<<"b="<<b<<std::endl<<"c="<<c;
}