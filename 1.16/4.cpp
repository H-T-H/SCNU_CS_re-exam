/*
4. 结构体应用（难度：中）
定义一个名为 Student 的结构体，包含 name (字符串)、id (整数) 和 score (浮点数) 三个成员。编写一个程序，创建 Student 类型的数组，从用户输入读取学生信息，并将信息存储在数组中。最后，打印所有学生的信息。
 */
#include<iostream>
#include<string>
typedef struct tagStudent{
    std::string     name;
    int             id;
    float           score;
}Student;

int main(){
    Student A;
    int n;
    std::cout<<"pls enter number of students:";
    std::cin>>n;
    Student students[n];
    //输入
    for(int i = 0 ;i < n; i++){
      std::cout<<"pls enter name of student"<<i+1<<":";
      std::cin>>students[i].name;
      std::cout<<"pls enter id of student"<<i+1<<":";
      std::cin>>students[i].id;
      std::cout<<"pls enter score of student"<<i+1<<":";
      std::cin>>students[i].score;
    }
    //输出
    for(int i = 0 ;i < n; i++){
        std::cout<<"name of student"<<i+1<<":"<<students[i].name<<std::endl;
        std::cout<<"id of student"<<i+1<<":"<<students[i].id<<std::endl;
        std::cout<<"score of student"<<i+1<<":"<<students[i].score<<std::endl;
    }


}