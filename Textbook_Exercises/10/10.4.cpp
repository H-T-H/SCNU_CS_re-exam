/*
4．为学校的教师提供一个工具，使教师可以管理自己所教班级的信息。教师所需了解和处理的
信息包括课程名、上课时间、上课地点、学生名单、学生人数、期中考试成绩、期末考试成
绩和平时的课堂练习成绩。每位教师可自行规定课堂练习次数的上限。考试结束后，该工具
可为教师提供成绩分析，按优、良、中、差统计。
*/

//课程名用stirng，上课时间用string，上课地点用string，学生名单用vector<string>, 期中/期末考试成绩用vector<float>,平时成绩用vector<float>
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    vector<double> practiceScores;
    double midterm;
    double finalExam;
};

struct Course {
    string courseName;
    string classTime;
    string location;
    vector<Student> students;
    int maxPracticeCount;

    void addStudent(const string& studentName) {
        Student newStudent = {studentName, vector<double>(maxPracticeCount, 0), 0, 0};
        students.push_back(newStudent);
    }

    void setScores(const string& studentName, double mid, double fin, const vector<double>& practices) {
        for (auto& student : students) {
            if (student.name == studentName) {
                student.midterm = mid;
                student.finalExam = fin;
                student.practiceScores = practices;
                return;
            }
        }
        cout << "Student not found!\n";
    }

    void analyzeGrades() {
        int excellent = 0, good = 0, average = 0, poor = 0;
        for (const auto& student : students) {
            double total = student.midterm * 0.3 + student.finalExam * 0.5;
            for (double score : student.practiceScores) {
                total += score * 0.2 / maxPracticeCount;
            }
            
            if (total >= 85) excellent++;
            else if (total >= 70) good++;
            else if (total >= 60) average++;
            else poor++;
        }

        cout << "Grade Analysis:\n";
        cout << "Excellent (>=85): " << excellent << "\n";
        cout << "Good (70-84): " << good << "\n";
        cout << "Average (60-69): " << average << "\n";
        cout << "Poor (<60): " << poor << "\n";
    }
};

int main() {
    Course course = {"Math", "Monday 10:00", "Room 101", {}, 3};
    
    course.addStudent("Alice");
    course.addStudent("Bob");
    
    course.setScores("Alice", 88, 90, {85, 80, 75});
    course.setScores("Bob", 70, 75, {60, 65, 70});
    
    course.analyzeGrades();
    return 0;
}
