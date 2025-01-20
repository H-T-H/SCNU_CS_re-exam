/*
2. 学生成绩排序与查找 (考察：结构体/类、排序、查找)

定义一个结构体 Student，包含成员：姓名（字符串）、学号（字符串）、和总成绩（整数）。

编写一个程序，实现以下功能：

从键盘读取若干个学生的信息（姓名、学号、总成绩），直到输入的姓名为 "end" 时结束。

将这些学生信息存储在一个 Student 结构体数组中（可以使用动态数组或 std::vector）。

按照学生总成绩从高到低对数组进行排序（可以使用 std::sort 或自己实现排序算法）。

提示用户输入一个学号，并在数组中查找该学号的学生，如果找到，则输出该学生的姓名和总成绩，否则输出 "Not found"。
 */
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

typedef struct student{
    string name;
    string id;
    int    score;
}student;

bool compareStudents(const student& a, const student& b) {
    return a.score > b.score;
}

int main(){
    vector<student> Student ;
    student studentTemp;
    //输入
    while(1){
        cout<<"pls enter information(name,id,score):";
        cin>>studentTemp.name;
        if(studentTemp.name == "end")    break;
        else{
          cin>>studentTemp.id>>studentTemp.score;
        }
        Student.push_back(studentTemp);
    }
    //排序
    sort(Student.begin(),Student.end(),compareStudents);
    //输出排序后的
    for (const auto& s : Student) {
            std::cout << "name: " << s.name << ", score: " << s.score << std::endl;

        }
    //查找
    string serachid;
    cout<<"pls enterr serch id:";
    cin>>serachid;
    bool found = false;
    for(auto s:Student) {
        if(s.id==serachid){
            cout<<"name:"<<s.name<<endl;
            cout<<"id:"<<s.id<<endl;
            cout<<"score:"<<s.score<<endl;
            found = true;
        }
    }
    if(!found)    cout<<"404 not found"<<endl;
}