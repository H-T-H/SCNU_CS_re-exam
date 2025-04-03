/*
题目描述
有N 件物品和一个容量为W的背包。每件物品只能选择一次。第 i 件物品的重量是 weight[i]，价值是value[i]。求解将哪些物品装入背包，使总重量不超过背包容量，且总价值最大。
输入格式
第一行输入两个整数
N和W，分别表示物品数量和背包容量。
接下来N行，每行输入两个整数，表示第i件物品的重量和价值。
示例输入
4 5
2 12
1 10
3 20
2 15
要求
编写程序输出最大价值。
* */
#include<iostream>
using namespace std;

int max(int a,int b) {
  if (a>b) return a;
  return b;
}

int main(){
  //初始化
  int N,W;
  cin>>N>>W;
  int weight[N],value[N];
  for(int i = 0 ; i < N; i++){
    cin>>weight[i]>>value[i];
  }
  //求解
  int result[N+1][W+1];//状态转移数组
  //初始化数组
  for (int i = 0;i < N+1;i++) {
    for (int j = 0;j < W+1;j++) {
      result[i][j] = 0;
    }
  }
  //对每个物品
  for (int i = 1;i < N+1;i++) {
    int ilem_weight = weight[i-1];//当前物品容量
    int ilem_value = value[i-1];  //当前物品价值

    //每增加一个背包容量
    for (int j = 1;j <W +1;j++) {
      if (j < ilem_weight) {
        result[i][j] = result[i-1][j];//背包容量小于当前物品重量不装入
      }
      else {
        result[i][j] = max(result[i][j],result[i-1][j-ilem_weight]+ilem_value);//否则尝试装入此物品s
      }
    }
  }
  cout<<"result:"<<result[N][W];//输出结果


}

