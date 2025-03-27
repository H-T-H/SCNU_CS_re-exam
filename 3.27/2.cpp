#include<iostream>
#include<stdexcept>
using namespace std;

void panduan(int i){
    if(i < 0){
        throw runtime_error("haha");
    }
    else{
        cout<<"冇问题";
    }
}
int main(){
    try{
        panduan(-1);
    }
    catch(exception& e){
        cout<<"big problem:"<<e.what();
    }
}