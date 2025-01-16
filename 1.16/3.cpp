/*
3. 文件读写（难度：中）
编写一个程序，从名为 "input.txt" 的文件中读取整数，并将它们的和写入名为 "output.txt" 的文件中。
 */
#include<iostream>
#include<fstream>
#include<string>
int main(){
    std::ifstream input("input.txt");
    std::ofstream output("output.txt");
    // 检查文件是否成功打开
    if (!input.is_open()) {
        std::cerr << "can't open input.txt" << std::endl;
        return 1; // 返回非零值表示错误
    }
    if (!output.is_open()) {
        std::cerr << "can't open output.txt" << std::endl;
        return 1;
    }
    std::string  a;
    std::getline(input,a);
    std::cout<<a<<std::endl;
    output<<a<<std::endl;
    input.close();
    output.close();
    return 0;
}