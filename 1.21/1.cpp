/*
1. 多项式计算 (考察：数组、循环、数学计算)

编写一个程序，实现以下功能：

接受用户输入一个多项式的项数 n。

动态创建一个 double 类型的数组，用于存储多项式的系数。

依次提示用户输入 n+1 个系数 (从常数项到最高次项)。

提示用户输入一个 x 的值。

计算并输出该多项式在 x 处的值。

例如，如果用户输入 n = 2，并依次输入系数 1, 2, 3 (代表多项式 1 + 2x + 3x^2)，然后输入 x = 2，则程序输出计算结果 1 + 2*2 + 3*2*2 = 17。
*/
#include<vector>
#include<iostream>
#include<cmath>

using namespace std;

double func(){
    double result = 0;
    vector<double> A;//存放系数的动态数组
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<"now enter "<<n+1<<" coefficients:";
    for(int i =0;i<=n;i++){
      double temp;
      cin>>temp;
      A.push_back(temp);
    }
    double x;
    cout<<"enter x:";
    cin>>x;
    for(size_t i = 0;i <= A.size();++i){
        result += A[i] * pow(x,i);
    }
    return result;
}

int main(){
    int result = func();
    cout<<result;
}