## C++程序设计复试考试大纲细致知识点总结

以下是对C++程序设计复试考试大纲中1到5部分内容的细致知识点总结：

**1. 基本数据类型与输入输出**

* **1.1 字符集与保留字:**
    * ASCII字符集、Unicode字符集
    * C++关键字 (e.g., int, float, double, char, bool, void, if, else, for, while, switch, case, return, class, struct, public, private, protected, etc.)
* **1.2 基本数据类型:**
    * 整型 (int, short, long, long long)  及其取值范围、unsigned类型
    * 浮点型 (float, double, long double) 及其精度
    * 字符型 (char)  及其编码方式
    * 布尔型 (bool) - true/false
    * void 类型 -  表示无类型
* **1.3 变量与常量的定义:**
    * 变量的声明和初始化
    * 常量的声明和初始化 (const关键字)
    * 变量的作用域和生命周期
    * 字面常量
* **1.4 cin, cout, printf, scanf的用法:**
    * `cin`：标准输入流对象，`>>` 运算符
    * `cout`：标准输出流对象，`<<` 运算符
    * 格式控制符 (e.g., `%d`, `%f`, `%c`, `%s`)
    * `printf` 和 `scanf`：C风格的输入输出函数，需要包含 `<cstdio>` 头文件


**2. 表达式和过程化语句**

* **2.1 表达式:**
    * 算术表达式、关系表达式、逻辑表达式、赋值表达式、条件表达式
    * 运算符优先级和结合性
* **2.2 算术运算、赋值和类型转换:**
    * 算术运算符 (+, -, *, /, %, ++, --)
    * 赋值运算符 (=, +=, -=, *=, /=, %=)
    * 类型转换 (隐式转换、显式转换 - static_cast, dynamic_cast, const_cast, reinterpret_cast)
* **2.3 关系与逻辑运算:**
    * 关系运算符 (>, <, >=, <=, ==, !=)
    * 逻辑运算符 (!, &&, ||)
    * 短路求值
* **2.4 if 语句:**
    * if-else 结构
    * 嵌套 if 语句
* **2.5 条件运算符、逗号表达式:**
    * 条件运算符 (?:) -  三目运算符
    * 逗号表达式
* **2.6 while, do-while, for 循环语句:**
    * 循环的初始化、条件、迭代
    * 循环的嵌套
    * 无限循环
* **2.7 switch, break, continue 语句:**
    * switch 语句的多路分支
    * break 语句跳出循环或 switch 语句
    * continue 语句跳过当前循环迭代


**3. 函数**

* **3.1 函数原型、函数的调用，按值调用，引用调用，函数与变量的作用域:**
    * 函数的声明和定义
    * 函数的参数和返回值
    * 按值调用和按引用调用
    * 函数作用域、全局作用域、局部作用域
* **3.2 全局变量、局部变量和静态局部变量:**
    * 全局变量的生命周期和作用域
    * 局部变量的生命周期和作用域
    * 静态局部变量的生命周期
* **3.3 递归函数、内联函数、重载函数:**
    * 递归函数的定义和调用，递归的终止条件
    * 内联函数 (inline 关键字)
    * 函数重载 -  同名函数，不同参数列表


**4. 数组**

* **4.1 数组定义和初始化数组:**
    * 一维数组的声明和初始化
    * 多维数组的声明和初始化
* **4.2 数组做函数参数:**
    * 数组作为函数参数的传递方式 (数组名退化为指针)
* **4.3 二维数组:**
    * 二维数组的访问方式
    * 二维数组的存储方式 (行优先、列优先)
* **4.4 字符数组与字符串，字符串函数:**
    * 字符数组的定义和初始化
    * C风格字符串 (以 '\0' 结尾)
    * 常用字符串函数 (strlen, strcpy, strcat, strcmp, strstr 等) - 需要包含 `<cstring>` 头文件


**5. 指针**

* **5.1 指针概念、运算，new, delete 运算符:**
    * 指针的声明和初始化
    * 指针的运算 (指针算术、指针的解引用)
    * 动态内存分配 (new) 和释放 (delete)
    * 空指针 (nullptr)
* **5.2 指针与函数:**
    * 指针作为函数参数
    * 函数返回指针
* **5.3 字符指针:**
    * 指向字符的指针
    * 字符指针与字符串的关系
* **5.4 指针数组，数组指针:**
    * 指针数组 -  存储指针的数组
    * 数组指针 -  指向数组的指针


**6. 引用**

* **6.1 引用的概念和操作:**
    * 引用是变量的别名
    * 声明引用时必须初始化
    * 引用一旦绑定到某个变量，就不能再更改绑定到其他变量
    * 对引用的操作等同于对原始变量的操作
* **6.2 用引用传递函数参数和返回值:**
    * 使用引用传递参数可以避免复制大型对象，提高效率
    * 使用引用返回函数值可以返回局部变量的引用（需要注意生命周期问题），也可以修改函数调用者的变量
* **6.3 函数调用作为左值:**
    * 返回引用的函数调用可以作为左值，即可以出现在赋值运算符的左侧


**7. 结构体和共同体 (结构体更重要)**

* **结构体 (struct):**
    * 定义一种新的数据类型，可以包含不同类型的成员变量
    * 结构体成员的访问方式：使用点运算符 (.)
    * 结构体变量的声明和初始化
    * 结构体数组
    * 结构体指针
    * 结构体作为函数参数和返回值
* **共同体 (union):**
    * 所有成员共享同一块内存空间
    * 同一时间只有一个成员的值有效
    * 节省内存空间，但使用时需要小心


**8. 类与对象**

* **8.1 类的定义、成员变量与成员函数的定义与调用:**
    * 类是用户自定义的数据类型，是对象的蓝图
    * 成员变量：描述对象的属性
    * 成员函数：描述对象的行为
    * 访问修饰符：public, private, protected
    * 对象的声明和初始化
    * 成员的访问方式：使用点运算符 (.)
* **8.2 结构体与类的区别:**
    * 默认访问权限不同：结构体默认成员是public，类默认成员是private
* **8.3 构造函数与析构函数:**
    * 构造函数：用于初始化对象，在对象创建时自动调用
    * 析构函数：用于清理对象，在对象销毁时自动调用
    * 构造函数重载
* **8.4 对象的定义、引用、对象数组、对象指针、对象的动态建立与释放:**
    * 对象的定义和初始化
    * 对象的引用
    * 对象数组
    * 对象指针
    * 使用 new 和 delete 动态创建和释放对象
* **8.5 静态成员、友元:**
    * 静态成员变量：所有对象共享同一个静态成员变量
    * 静态成员函数：可以直接通过类名调用，不需要对象
    * 友元函数：可以访问类的私有成员
    * 友元类：该类的所有成员函数都可以访问另一个类的私有成员
* **8.6 类和对象的应用:**
    * 使用类和对象实现面向对象编程
* **8.7 类的封装性和信息隐蔽:**
    * 使用访问修饰符控制成员的访问权限，实现信息隐藏


**9. 运算符重载**

* **运算符重载的概念、规则和使用方法:**
    * 改变运算符的原有含义，使其能够操作用户自定义的数据类型
    * 不能重载的运算符：.  .*  ::  ?:
* **常用的单目和双目运算符重载:**
    * 单目运算符重载：例如 ++, --, ! 等
    * 双目运算符重载：例如 +, -, *, /, ==, !=, <, > 等
* **流插入和提取运算符重载 (<< 和 >>):**
    * 重载 << 和 >> 运算符，实现自定义类型的输入输出


**10. 继承**

* **10.1 继承的概念和工作方式:**
    * 继承是一种代码复用的机制，允许创建一个新类（派生类）基于现有类（基类）
    * 派生类继承了基类的成员（变量和函数），并且可以添加自己的成员
* **10.2 派生类的声明与构成:**
    * 使用冒号 `:` 表示继承关系，例如 `class Derived : public Base { ... };`
    * 继承方式：public, protected, private
* **10.3 派生类成员的访问属性:**
    * 基类成员的访问权限在派生类中可能会发生变化，取决于继承方式
* **10.4 派生类的构造函数和析构函数:**
    * 派生类的构造函数需要调用基类的构造函数来初始化继承的成员
    * 派生类的析构函数在销毁对象时会自动调用基类的析构函数
* **10.5 基类与派生类的关系:**
    * “is-a”关系：派生类是基类的一种特殊类型
* **10.6 继承与组合的区别:**
    * 继承表示“is-a”关系，组合表示“has-a”关系
    * 组合是将其他类的对象作为成员变量


**11. 多态性**

* **多态性与虚函数的概念:**
    * 多态性是指相同类型的指针或引用可以指向不同类型的对象，并调用相同名称的函数，但会执行不同的行为
    * 虚函数：使用 `virtual` 关键字声明的函数，可以在派生类中重写
* **纯虚函数和抽象类:**
    * 纯虚函数：没有实现的虚函数，例如 `virtual void func() = 0;`
    * 抽象类：包含至少一个纯虚函数的类，不能实例化对象


**12. 流**

* **标准输入、输出流:**
    * `cin`：标准输入流对象
    * `cout`：标准输出流对象
    * `cerr`：标准错误流对象
    * `clog`：标准日志流对象
* **文件流的读写操作:**
    * `ofstream`：文件输出流类
    * `ifstream`：文件输入流类
    * `fstream`：文件输入输出流类
    * 打开文件：`open()` 函数
    * 关闭文件：`close()` 函数
    * 读写文件：`<<` 和 `>>` 运算符，`get()`、`getline()`、`put()`、`write()` 等函数
* **流的概念:**
    * 流是一种抽象的数据传输方式，可以将数据从一个位置传输到另一个位置


**13. 命名空间和标准模板库**

* **C++命名空间的概念与引用:**
    * 命名空间用于避免命名冲突
    * 使用 `namespace` 关键字定义命名空间
    * 使用 `using namespace` 指令引入命名空间
    * 使用作用域解析运算符 `::` 访问命名空间中的成员
* **标准模板库 (STL):**
    * STL 提供了一组通用的模板类和函数，例如容器、迭代器、算法等
    * 常用容器：`vector`、`list`、`deque`、`set`、`map` 等
    * 常用算法：`sort`、`find`、`copy` 等
    * 迭代器：用于遍历容器中的元素


祝你复习顺利，考试成功！
