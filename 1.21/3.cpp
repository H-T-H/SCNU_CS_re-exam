/*
3. 类模板与通用数据结构 (考察：类模板、泛型编程)

实现一个简单的类模板 Stack，用于表示栈这种数据结构。该模板类需要支持以下操作：

push(T item): 将一个元素 item 入栈。

pop(): 将栈顶元素弹出 (如果栈为空，则抛出一个 std::runtime_error 异常)。

peek(): 查看栈顶元素 (但不弹出，如果栈为空，则抛出一个 std::runtime_error 异常)。

isEmpty(): 判断栈是否为空。

在 main 函数中，分别用 int 和 std::string 类型实例化这个模板类，并进行简单的入栈、出栈操作。
*/
#include<vector>
#include<iostream>
#include<string>
using namespace std;

template <class T>
class Stack{
    private:
        vector<T> A;
    public:
        void push(T const&);
        void pop();
        T peek();
        bool isEmpty();
};

template <class T>
void Stack<T>::push(T const& a){
    A.push_back(a);
}

template <class T>
void Stack<T>::pop(){
    if(A.empty())    throw runtime_error("big problem,stack is empty!");
    A.pop_back();
}

template <class T>
T Stack<T>::peek(){
    if(A.empty())    throw runtime_error("big problem,stack is empty!");
    return A.back();
}

template <class T>
bool Stack<T>::isEmpty(){
    if(A.empty())    return true;
    return false;
}
//测试代码（main函数）是ai写的
int main() {
    // Test with integers
    Stack<int> intStack;
    cout << "Integer Stack Tests:" << endl;
    cout << "Is Empty? " << intStack.isEmpty() << endl; // Should print 1 (true)

    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    cout << "Is Empty? " << intStack.isEmpty() << endl; // Should print 0 (false)
    cout << "Peek: " << intStack.peek() << endl; // Should print 30

    intStack.pop();
    cout << "Peek after pop: " << intStack.peek() << endl; // Should print 20

    intStack.pop();
    intStack.pop();
    cout << "Is Empty after popping all? " << intStack.isEmpty() << endl; //Should print 1 (true)

    try {
        intStack.pop();  // Should throw error
    }
    catch (const runtime_error& e) {
        cerr << "Error caught: " << e.what() << endl;
    }


    try {
        intStack.peek();
    }
    catch(const runtime_error& e){
        cerr << "Error caught: " << e.what() << endl;
    }

    cout << endl;

    // Test with strings
    Stack<string> stringStack;
    cout << "String Stack Tests:" << endl;
    cout << "Is Empty? " << stringStack.isEmpty() << endl; // Should print 1 (true)
    stringStack.push("hello");
    stringStack.push("world");
    cout << "Is Empty? " << stringStack.isEmpty() << endl; // Should print 0 (false)
    cout << "Peek: " << stringStack.peek() << endl; // Should print "world"

    stringStack.pop();
    cout << "Peek after pop: " << stringStack.peek() << endl; // Should print "hello"

    stringStack.pop();
    cout << "Is Empty after popping all? " << stringStack.isEmpty() << endl;  //Should print 1 (true)

    try{
        stringStack.pop();
    }
    catch(const runtime_error& e){
        cerr << "Error caught: " << e.what() << endl;
    }
    try{
        stringStack.peek();
    }
    catch(const runtime_error& e){
        cerr << "Error caught: " << e.what() << endl;
    }
    cout << endl;


    // Test with doubles
    Stack<double> doubleStack;
    cout << "Double Stack Tests:" << endl;
    doubleStack.push(3.14);
    doubleStack.push(2.71);
     cout << "Is Empty? " << doubleStack.isEmpty() << endl; // Should print 0 (false)
     cout << "Peek: " << doubleStack.peek() << endl; // Should print 2.71
    doubleStack.pop();
     cout << "Peek: " << doubleStack.peek() << endl; // Should print 3.14
      doubleStack.pop();
      cout << "Is Empty? " << doubleStack.isEmpty() << endl; // Should print 1 (true)
    try{
        doubleStack.pop();
    }
    catch(const runtime_error& e){
        cerr << "Error caught: " << e.what() << endl;
    }
    try{
        doubleStack.peek();
    }
    catch(const runtime_error& e){
        cerr << "Error caught: " << e.what() << endl;
    }


    return 0;
}