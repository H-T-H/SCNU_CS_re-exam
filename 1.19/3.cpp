/*. 使用 STL vector 的动态数组操作（考察：STL 容器 vector 的使用）

编写一个程序，实现以下功能：

创建一个空的 std::vector<int>。

循环提示用户输入整数，直到用户输入 0 为止。

将用户输入的每个非零整数添加到 vector 的末尾。

遍历 vector，计算所有元素的平均值并输出。

删除 vector 中所有的偶数。

再次遍历 vector，输出剩余的元素。
*/

#include<vector>
#include<iostream>

int main(){
    std::vector<int> A;
    int temp;
    while(1){
        std::cout<<"pls enter a number"<<"\n";
        std::cin>>temp;
        if (temp == 0)    break;
        else A.push_back(temp);
    };
    int total = 0;
    int size = A.size();

    //遍历求和
    for(int i = 0;i < A.size();i++){
        total += A[i];
    }
    //遍历删偶数
    for(int i = 0;i < A.size();i++){
        if(A[i] %2 ==0)    A.erase(A.begin()+i);
    }
    std::cout<<"average: "<<(float)total/size<<std::endl;
    //遍历输出剩余元素
    for(int i = 0;i < A.size();i++){
        std::cout<<A[i]<<std::endl;
    }
}