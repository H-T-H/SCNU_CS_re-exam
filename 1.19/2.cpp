/*
2. 字符串查找与替换（考察：字符串操作）

编写一个函数 replaceString，接受三个字符串参数：原始字符串 text，要查找的子字符串 oldSub，以及用于替换的新字符串 newSub。函数的功能是将 text 中所有出现的 oldSub 替换为 newSub，并返回替换后的字符串。
*/
#include<string>
#include<iostream>

std::string replaceString(std::string text,std::string oldSub,std::string newSub){
    while(text.find(oldSub) != std::string::npos){
        text.replace(text.find(oldSub),oldSub.length(),newSub);
    }
    return text;
}


int main(){
    std::string str="123haha12haha32haha23haha12haha";
    std::cout<<str<<"\n"<<replaceString(str,"haha","hehe")<<"\n";
}