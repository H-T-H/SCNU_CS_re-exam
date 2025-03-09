/*
编写一个 C++ 程序，从一个数据文件（例如 data.txt）中读取一系列整数（整数之间以空格或换行分隔），完成以下任务：

将读取到的整数存入适当的容器（如 std::vector<int>）；
对整数进行升序排序；
将排序后的结果写入到另一个文件（例如 sorted.txt），输出时数字之间以空格分隔。
同时需要对文件打开失败等情况进行合理的错误处理。
*/
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){
    ifstream input("data.txt");
    ofstream output("sorted.txt");
    if (input.fail()){
        cout<<"open data.txt fail.";
        return 1;
    }
    if (output.fail()){
        cout<<"open sorted.txt fail.";
        return 1;
    }
    string line;
    string sortedString;
    vector<int> nums;
    while(getline(input,line)){
        stringstream lineStream(line);//str转换为流
        string numberStr;
        while (lineStream >> numberStr) {
            nums.push_back(stoi(numberStr));
        }
    sort(nums.begin(),nums.end());
    for(auto i : nums){
        sortedString += to_string(i) + " ";
    }
    output<<sortedString;
    }
}