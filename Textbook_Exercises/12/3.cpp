#include <iostream>
#include <cstring>
using namespace std;

// 定义单链表结点，用于存放一本借出的书的编号
struct BookNode {
    int bookNo;
    BookNode* next;
    BookNode(int no, BookNode* nxt = nullptr) : bookNo(no), next(nxt) {}
};

class reader {
protected:  // 将成员设为protected，方便子类访问
    int no;
    char name[10];
    char dept[20];
public:
    reader(int n, const char *nm, const char *d)
    {
        no = n;
        strcpy(name, nm);
        strcpy(dept, d);
    }
};

class readerTeacher : public reader {
    enum { MAX = 10 };  // 最多允许借的数量
    int borrowed;       // 当前已借书数量
    BookNode* record;   // 链表头，保存借书信息
public:
    readerTeacher(int n, const char *nm, const char *d)
        : reader(n, nm, d), borrowed(0), record(nullptr) {}

    // 借书操作：如果已借数量达到上限则返回false，否则在链表头插入新结点
    bool bookBorrow(int bookNo) {
        if(borrowed >= MAX)
            return false;
        record = new BookNode(bookNo, record);
        borrowed++;
        return true;
    }

    // 还书操作：在链表中查找对应的图书编号，删除结点并释放内存
    bool bookReturn(int bookNo) {
        BookNode *p = record, *prev = nullptr;
        while(p && p->bookNo != bookNo) {
            prev = p;
            p = p->next;
        }
        if(p == nullptr)
            return false; // 未找到该借书记录
        if(prev == nullptr)
            record = p->next;
        else
            prev->next = p->next;
        delete p;
        borrowed--;
        return true;
    }

    // 显示所有借书记录
    void show() {
        cout << "教师读者 " << name << " 的借书记录：";
        BookNode *p = record;
        while(p) {
            cout << p->bookNo << " ";
            p = p->next;
        }
        cout << endl;
    }

    // 析构函数中释放所有链表结点
    ~readerTeacher() {
        while(record) {
            BookNode* temp = record;
            record = record->next;
            delete temp;
        }
    }
};

class readerStudent : public reader {
    enum { MAX = 5 };   // 最多允许借的数量
    int borrowed;       // 当前已借书数量
    BookNode* record;   // 链表头，保存借书信息
public:
    readerStudent(int n, const char *nm, const char *d)
        : reader(n, nm, d), borrowed(0), record(nullptr) {}

    bool bookBorrow(int bookNo) {
        if(borrowed >= MAX)
            return false;
        record = new BookNode(bookNo, record);
        borrowed++;
        return true;
    }

    bool bookReturn(int bookNo) {
        BookNode *p = record, *prev = nullptr;
        while(p && p->bookNo != bookNo) {
            prev = p;
            p = p->next;
        }
        if(p == nullptr)
            return false;
        if(prev == nullptr)
            record = p->next;
        else
            prev->next = p->next;
        delete p;
        borrowed--;
        return true;
    }

    void show() {
        cout << "学生读者 " << name << " 的借书记录：";
        BookNode *p = record;
        while(p) {
            cout << p->bookNo << " ";
            p = p->next;
        }
        cout << endl;
    }

    ~readerStudent() {
        while(record) {
            BookNode* temp = record;
            record = record->next;
            delete temp;
        }
    }
};

// 以下为简单测试
int main(){
    readerTeacher teacher(1, "Alice", "数学系");
    teacher.bookBorrow(101);
    teacher.bookBorrow(102);
    teacher.show();
    teacher.bookReturn(101);
    teacher.show();

    readerStudent student(2, "Bob", "计算机系");
    student.bookBorrow(201);
    student.bookBorrow(202);
    student.show();
    student.bookReturn(201);
    student.show();

    return 0;
}
