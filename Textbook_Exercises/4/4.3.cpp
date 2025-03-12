/*
3．编写一个程序，要求输入一个整型数N，然后显示一个由N行组成的三角形。在这个三角形中，
第一行一个“*”，以后每行比上一行多两个“*”，三角形像下面这样尖角朝上。
*
 ***
 *****
 *******
 *********
 ***********
 *************
 ***************
*/
#include<iostream>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    for(int i = 1;i<= n;i++)
    {
        for(int j = 0;j < n-i;j++)
        {
            cout<<" ";
        }
        for(int k = 0;k < 2*i-1;k++)
        {
            cout<<"*";
        }
        for(int j = 0;j < n-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}