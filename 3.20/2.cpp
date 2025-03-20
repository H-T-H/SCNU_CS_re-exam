/*
1、给定一个3x3矩阵，把主对角线左下角数变成其对称位置的数，右上角对称位置数变为 0
*/
#include<vector>
#include<iostream>
using namespace std;

void matrixTrans(vector<vector<int>>& matrix){
    matrix[2][0] = matrix[0][2];
    matrix[0][2] = 0;
}

int main(){
    vector<vector<int>> matrix = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    for(vector<int> row:matrix){
        for(int num:row){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    matrixTrans(matrix);
    for(vector<int> row:matrix){
        for(int num:row){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}