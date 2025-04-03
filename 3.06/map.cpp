//统计字符串内字符出现个数
#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

unordered_map<char,int> count_char(string str){
    unordered_map<char,int> hashmap;
    for(int i = 0;i< str.size();i++){
        if (hashmap.find(str[i]) == hashmap.end()){
            hashmap[str[i]] = 1;
        }
        else{
            hashmap[str[i]] = hashmap[str[i]]+1;
        }
    }
    return hashmap;
}

int main(){
    string str="abbcccdddd!@@###$$$$";
    unordered_map hashmap = count_char(str);
    for(const auto& pair : hashmap){
        cout<<"key: "<<pair.first<<"\n"<<"value: "<<pair.second<<endl;
    }
}
