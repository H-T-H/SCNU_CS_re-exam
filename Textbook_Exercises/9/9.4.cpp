#include"9.4.h"
#include<iostream>
//实现
complex complex::operator+(const complex& other){
    return complex(real + other.real,img + other.img);
}
complex complex::operator*(const complex& other){
    return complex(
        real * other.real - img * other.img,
        img * other.real + real * other.img
    );
}
void complex::print_complex() const{
    std::cout<<real;
    if(img<0){
        std::cout<<img<<"i"<<std::endl;
    }
    else if(img > 0){
        std::cout<<"+"<<img<<"i"<<std::endl;
    }
    else{
        std::cout<<std::endl;
    }
}