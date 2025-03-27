#include<iostream>
using namespace std;

//运算符重载

class complex{
    private:
        double real;
        double img;
    public:
        complex(int real, int img):real(real),img(img){}
    friend ostream &operator<<(ostream& output, const complex& comp){
        cout<<comp.real;
        if(comp.img > 0){
            cout<<"+"<<comp.img<<"i";
        }
        else if(comp.img <0){
            cout<<comp.img<<"i";
        }
        return output;
    }
};

int main(){
    complex* a = new complex(1,-1);
    cout<<*a;
    delete a;
}