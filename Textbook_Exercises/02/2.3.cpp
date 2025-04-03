/*
3．某工种按小时计算工资。每月劳动时间（小时）乘以每小时工资等于总工资。总工资扣除
10%的公积金，剩余的为应发工资。编写一个程序从键盘输入劳动时间和每小时工资，输出
应发工资。
*/
#include<iostream>
using namespace std;
int main(){
int time,pay;
cin>>time>>pay;
cout<<"pay you:"<<time*pay*0.9;
}