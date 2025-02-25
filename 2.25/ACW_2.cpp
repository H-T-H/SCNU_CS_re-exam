#include<iostream>
#include<vector>

using namespace std;

int max(int a,int b) {
  if (a>b)  return a;
  return b;
}

int main(){
  //初始化
  int N,V;
  cin>>N>>V;
  vector<vector<int>> dp(N+1,vector<int>(V+1,0));//动态规划矩阵
  vector<int> volume(N);
  vector<int> value(N);

  //读取初始数据
  for(int i = 0;i < N;i++){
    cin>>volume[i];
    cin>>value[i];
  }
  //计算dp
  //每个物品
  for (int i = 1;i < N+1;i++) {
    int ilem_volume = volume[i-1];//当前物品体积
    int ilem_value = value[i-1];//当前物品价值
    //每个容量
    for (int j = 1;j < V+1;j++) {
      if (j >= ilem_volume) {//可以装入
        dp[i][j] = max(dp[i-1][j],dp[i-1][j-ilem_volume]+ilem_value);//尝试装入
      } else {
        dp[i][j] = dp[i-1][j];//否则不装入
      }
    }
  }
  cout<<"result:"<<dp[N][V];//输出结果
}