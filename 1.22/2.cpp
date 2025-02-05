/*第二题：递归实现回文数转换
要求：

输入正整数 n，若 n 不是回文数，则将其与反转数相加，重复直到得到回文数。

递归函数 int makePalindrome(int n, int steps) 返回所需步数。

输出最终回文数及步数。

样例输入：
123

样例输出：
Palindrome:444 Steps:1
 */
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

int makePalindrome(int n, int steps){
    string s = to_string(n);
    string s_reverse = s;
    reverse(s_reverse.begin(),s_reverse.end());
    if(s_reverse == s) {
        cout<<"Palindrome:"<<s<<endl;return steps;
    }
    else return makePalindrome(stoll(s)+stoll(s_reverse),++steps);
}

int main(){
    cout<<"entet n:";
    int n;
    cin>>n;
    int step = makePalindrome(n,0);
    cout<<"steps:"<<step;
}