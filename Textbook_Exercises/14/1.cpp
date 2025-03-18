/*
1．编写一个文件复制程序copyfile，要求在命令行界面中通过输入
copyfile src_name obj_name
将名为src_name的文件复制到名为obj_name的文件中。
*/
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

int main(int argc,char* argv[]){
    if(argc != 3){
        cout<<"lose arg";
        return 0;
    }
    ifstream input(argv[1]);
    ofstream output(argv[2]);
    string temp;
    while(getline(input,temp)){
        output<<temp<<endl;
    }
    return 0;
}