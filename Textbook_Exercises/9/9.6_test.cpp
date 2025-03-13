#include"9.6.cpp"

int main(){
    rationalT r1 = rationalT(1, 2);
    rationalT r2 = rationalT(2, 3);
    rationalT r3 = rationalT(2, 4);
    rationalT r4 = r1 + r2;
    PrintRational(r1);
    PrintRational(r3);
    PrintRational(r4);
}