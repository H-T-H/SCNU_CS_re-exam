/*
题目1：统计文本文件中单词出现次数
描述：
编写一个 C++ 程序，从指定的文本文件（例如 input.txt）中读取内容，然后统计文件中每个单词出现的次数。

要求忽略大小写（例如，“Hello” 与 “hello” 视为同一个单词）。
输出结果写入另一个文件（例如 output.txt），每一行显示一个单词及其出现次数。
程序需合理处理文件打开失败的情况。
*/
#include<fstream>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<unordered_set>
using namespace std;

int main(){
    ifstream input("input.txt");
    ofstream output("output.txt");
    if (input.fail()) {  // 检查文件是否成功打开
        cout << "open input.txt fail." << endl;
        return 1;
    }
    if (output.fail()) {  // 检查文件是否成功打开
        cout << "open output.txt fail." << endl;
        return 1;
    }
    string str;
    string word;
    unordered_set<string> hash_set;
    while(getline(input,str)){//逐行读取
        transform(str.begin(),str.end(),str.begin(),::tolower);//转换小写
        stringstream ss(str);//转换为流
        while(ss>>word){//空格分割
            hash_set.insert(word);
        }
    }

    input.close();

    for(string word : hash_set){
        output<<word<<endl;
    }
    output.close();
}
