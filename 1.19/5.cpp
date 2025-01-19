/*
5. 命名空间的使用（考察：命名空间）

创建两个命名空间 NamespaceA 和 NamespaceB。

在 NamespaceA 中定义一个名为 value 的整型变量并赋值为 10。

在 NamespaceB 中定义一个名为 value 的整型变量并赋值为 20。

在全局作用域中，编写代码分别访问并输出 NamespaceA 和 NamespaceB 中的 value 变量。
 */

#include <iostream>

// 创建命名空间 NamespaceA
namespace NamespaceA {
    int value = 10;
}

// 创建命名空间 NamespaceB
namespace NamespaceB {
    int value = 20;
}

int main() {
    // 使用命名空间限定符访问 NamespaceA 中的 value
    std::cout << "NamespaceA::value = " << NamespaceA::value << std::endl;

    // 使用命名空间限定符访问 NamespaceB 中的 value
    std::cout << "NamespaceB::value = " << NamespaceB::value << std::endl;

    return 0;
}
//不了解，看的答案