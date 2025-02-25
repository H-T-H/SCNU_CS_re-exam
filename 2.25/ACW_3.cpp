#include<iostream>
#include<vector>
using namespace std;

int max(int a, int b){
  if (a>b)  return a;
  return b;
}

int main(){
  //初始化
  int N,V;
  cin>>N>>V;
  vector<int> volume(N);
  vector<int> value(N);
  vector<vector<int>> dp(N+1,vector(V+1,0));
  for(int i =0;i < N;i++){
    cin>>volume[i]>>value[i];
  }
  //求解
  for(int i = 1;i < N+1;i++){
    int ilem_volume = volume[i-1];
    int ilem_value = value[i-1];
    for(int j = 1;j < V+1;j++){
      dp[i][j] = dp [i-1][j];//不装入
      for(int k = 1;j >= k*ilem_volume;k++){
        dp[i][j] = max(dp[i][j],dp[i-1][j-k*ilem_volume] + k*ilem_value);
      }
    }
  }
  cout<<dp[N][V];
}

//acwing提交会超时，因为用了三层循环，但是我也不想改进了。
