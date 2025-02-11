/*
2. 字符串模式匹配 (考察：字符串操作、算法)

编写一个函数 findPattern，接受两个字符串参数 text 和 pattern。函数需要在 text 中查找 pattern 子串，并返回 pattern 子串在 text 中首次出现的索引位置。

如果 pattern 子串不在 text 中出现，则返回 -1。不能使用标准库的字符串查找函数 (例如 std::string::find)。

需要自己实现字符串模式匹配的逻辑 (例如，使用朴素的模式匹配算法)。
*/

#include<string>
#include<iostream>
using namespace std;

int findPattern(string text,string pattern){
    for(int i = 0;i < text.size()-pattern.size();i++){
        bool exist = true;
        for(int j = 0;j < pattern.size();j++){
          if(text[i+j] != pattern[j]){
            exist = false;
            break;
          }
        }
        if(exist)    return i;
    }
    return -1;
}

int main(){
  string text = "hello, what's your name?";
  string pattern1 = "hello";
  string pattern2 = "no";
  string pattern3 = "what's";
  cout<<findPattern(text,pattern1)<<endl<<findPattern(text,pattern2)<<endl<<findPattern(text,pattern3)<<endl;;

}