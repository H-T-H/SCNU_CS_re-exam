#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void write_file(string name,string mes){
  ofstream file(name);
  file<<mes;
  file.close();
}
void read_file(string name){
  ifstream file(name);
  string mes;
  file>>mes;
  cout<<mes;
  file.close();
}

int main(){
  cout<<"1:";
  write_file("input.txt","hello!\n");
  read_file("input.txt");
  cout<<"2:";
  write_file("input.txt","hi!\n");
  read_file("input.txt");
}