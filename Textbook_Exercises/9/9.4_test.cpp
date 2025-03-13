#include"9.4.h"

int main() {
complex c1(2.5, 3.0);
complex c2(1.0, -2.0);
complex c3 = c1 + c2;
complex c4 = c1 * c2;
c1.print_complex(); //输出c1
c2.print_complex(); //输出c2
c3.print_complex(); //输出c3
c4.print_complex(); //输出c4
return 0;
}