#include<vector>
#include<iostream>
using namespace std;
//邻接表
class graph{
public:
    int V;//顶点个数
    vector<vector<int>> adj;//邻接表
    graph(int V){
        this->V = V;
        adj.resize(V);
    }
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void printGraph(){
        for(int i = 0; i < V;i++){
            cout << "顶点 " << i << " 的邻接点:";
            for(int j = 0;j <adj[i].size();j++){
                cout<<" "<<adj[i][j];
            }
            cout<<endl;
        }
    }
};

//DFS辅助函数
void DFSUtil(const graph &g,int V,vector<bool> &visited){
    if(!visited[V]){
        visited[V] = true;
        cout<<V<<" ";
    }
    for(int neighbor : g.adj[V]){
        if(!visited[neighbor]){
            DFSUtil(g,neighbor,visited);
        }
    }
}
//完整DFS函数
void DFS(graph g){
    vector<bool> visited(g.V, false);
    cout<<"result: ";
    for(int i = 0;i < g.V;i++){
        DFSUtil(g,i,visited);
    }
    cout<<endl;
}

int main() {
    int V = 5; // 例如，创建一个包含 5 个顶点的图
    graph g(V);

    // 添加一些边
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    // 输出图的邻接表
    g.printGraph();
    //深度遍历
    DFS(g);
    return 0;
}