/*
3．试定义一个string类，用以处理字符串。它至少具有两个数据成员：字符串的内容和长度。
提供的操作有显示字符串、求字符串长度、在原字符串后添加一个字符串等。
*/
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

class String{
    private:
        int lens;
        vector<char> content;
    public:
        String(char* str){//构造函数
            lens = strlen(str);
            for(int i =0;i<lens;i++){
                content.push_back(str[i]);
            }
        }
        void print(){
            for(char c:content){
                cout<<c;
            }
            cout<<endl;
        }
        int getline(){
            return lens;
        }
        void push_back(char c){
            content.push_back(c);
            lens++;
        }
};

int main(){
    char str_[] = "Hello, World";
    String Str(str_);
    Str.print();
    cout<<"字符串长度为:"<<Str.getline()<<endl;
    Str.push_back('!');
    Str.print();
    cout<<"字符串长度为:"<<Str.getline()<<endl;
}