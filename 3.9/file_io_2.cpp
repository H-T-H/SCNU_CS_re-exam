/*题目2：文件复制程序
描述：
编写一个 C++ 程序，实现文件复制功能。程序需要：

从一个源文件（例如 source.txt）中读取内容；
将读取的内容写入到一个目标文件（例如 destination.txt）。
在复制过程中检查文件是否成功打开，并处理可能出现的错误（如文件不存在或读写权限不足）。
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream input("source.txt");
    if(input.fail()){
        cout<<"open source.txt fail";
        return 1;
    }
    ofstream output("destination.txt");
    if(output.fail()){
        cout<<"open destination.txt fail";
        return 1;
    }
    string str;
    while(getline(input,str)){
        output<<str<<endl;
    }

}