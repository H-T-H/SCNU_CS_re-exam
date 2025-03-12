/*
1．设计一组字符串处理函数，用动态内存分配的方法实现常用的字符串的操作，
包括字符串复制、字符串拼接、字符串比较、求字符串长度和取字符串的子串。作为测试，用这些函数实现文本的双向对齐。
*/
#include<iostream>
#include<vector>
using namespace std;

//求字符串长度
int get_lens(const char* source){
    int lens = 0;
    const char* temp = source;
    while(*temp!='\0'){
        lens++;
        temp++;
    }
    return lens;
}

//字符串复制
char* str_copy(const char* source)
{
    if(source == nullptr){
        return nullptr;
    }

    size_t lens = get_lens(source);

    char* destination = new char[lens+1];//要预留一位个\0，所以要+1
    for(size_t i = 0;i<lens;i++){
        destination[i] = source[i];
    }
    destination[lens] = '\0';
    return destination;
}

//字符串拼接
char* str_concat(const char* str1, const char* str2){
    int lens_1 = get_lens(str1);
    int lens_2 = get_lens(str2);
    char* destination = new char[lens_1+lens_2+1];
    for(size_t i = 0;i<lens_1;i++){
        destination[i] = str1[i];
    }
    for(size_t i = 0;i<lens_2;i++){
        destination[i+lens_1] = str2[i];
    }
    destination[lens_1+lens_2] = '\0';
    return destination;
}

//字符串比较
bool str_compare(const char* str1,const char* str2){
    
}

int main(){
    char* str_1 = {"Hello,"};
    char* str_2 ={"World!"};
    cout<<str_concat(str_1,str_2)<<endl;//输出Hello,World!
    cout<<str_copy(str_1);//输出Hello,
}