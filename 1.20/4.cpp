/*
4. 智能指针与资源管理 (考察：智能指针、动态内存)

编写一个程序，实现以下功能：

定义一个简单的类 Resource，包含一个整型数据成员，并在构造函数和析构函数中分别输出 "Resource Created" 和 "Resource Destroyed"。

在 main 函数中使用 std::unique_ptr 管理一个 Resource 对象，并设置一个初始值。

编写一个函数，接受一个 std::unique_ptr<Resource> 作为参数，在函数中修改 Resource 对象的数据成员，并将数据成员的值乘以 2。

在 main 函数中调用这个函数，然后输出 Resource 对象的数据成员值。

观察 Resource 对象的构造函数和析构函数何时被调用，理解 unique_ptr 的资源管理机制。
*/

#include<memory>





//感觉是超纲了，不太想做
