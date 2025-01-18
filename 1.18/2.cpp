/*
2. 学生信息管理系统（简化版）（考察：结构体/类、数组、基本输入输出）

定义一个结构体 Student，包含成员：学号（整型）、姓名（字符串）、和三门课程的成绩（语文、数学、英语，均为浮点型）。
编写一个程序，实现以下功能：
定义一个包含 5 个 Student 结构体的数组。
循环提示用户输入 5 个学生的信息，包括学号、姓名和三门课程的成绩。
计算每个学生的平均成绩，并将所有学生的信息（包括平均成绩）输出到屏幕上，格式如下：
学号: [学号], 姓名: [姓名], 语文: [语文成绩], 数学: [数学成绩], 英语: [英语成绩], 平均分: [平均成绩]
*/
#include<iostream>
#include<string>

typedef struct Student{
    int id;
    std::string name;
    float    Chinese;
    float    Math;
    float    English;
}student;

student students[5];

int main(){
    //input student information
    for(int i = 0;i < 5;i++){
        std::cout<<"pls enter the id of student "<<i+1<<std::endl;
        std::cin>>students[i].id;
        std::cout<<"pls enter the name of student "<<i+1<<std::endl;
        std::cin>>students[i].name;
        std::cout<<"pls enter the Chinese score of student "<<i+1<<std::endl;
        std::cin>>students[i].Chinese;
        std::cout<<"pls enter the Math score of student "<<i+1<<std::endl;
        std::cin>>students[i].Math;
        std::cout<<"pls enter the English score of student "<<i+1<<std::endl;
        std::cin>>students[i].English;
    }
    //output information
    for(int i = 0;i < 5;i++){
        std::cout<<"id:"<<students[i].id<<std::endl;
        std::cout<<"name:"<<students[i].name<<std::endl;
        std::cout<<"Chinese score:"<<students[i].Chinese<<std::endl;
        std::cout<<"Math score:"<<students[i].Math<<std::endl;
        std::cout<<"English score:"<<students[i].English<<std::endl;
        std::cout<<"average score:"<<(students[i].Chinese+students[i].Math+students[i].English)/3<<std::endl;

    }
}