#include<fstream>
#include<string>
#include<iostream>
using namespace std;


int main(){
    ifstream input("input.txt");
    ofstream output("test.txt");
    string str = "";
    while(getline(input,str)){
        cout<<str<<endl;
        output<<str<<endl;
    }
}