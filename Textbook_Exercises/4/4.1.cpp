/*
1．编写这样一个程序：先读入一个正整数N，然后计算并显示前N个奇数的和。
例如，如果N为4，这个程序应显示16，它是1＋3＋5＋7的和。
*/
#include<iostream>
using namespace std;

int main(){
    int N;
    int i = 1;
    int sum = 0;
    cin >> N;
    while(N > 0)
    {
        sum += i;
        i += 2;
        N--;
    }
    cout<<sum;
}