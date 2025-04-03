/*
4．试将第8章程序设计题的第1题改写成一个库。
*/
class complex{
    public:
        complex operator+(const complex& other);
        complex operator-(const complex& other);
        complex operator*(const complex& other);

        complex(float real_,float img_):real(real_),img(img_){};
        void print_complex() const;
    private:
        float real;
        float img;
};