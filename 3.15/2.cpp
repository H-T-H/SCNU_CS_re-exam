//图的深度优先
#include<iostream>
#include<vector>
using namespace std;

class Graph{
    public:
        vector<vector<int>> adj;//邻接表
        int v;//顶点个数
        Graph(int v): v(v){
            adj.resize(v);
        };
        void addEdge(int node1,int node2){
            adj[node1].push_back(node2);
            adj[node2].push_back(node1);
        }
        void DFS(int start_node);
        void DFS_until(int n, vector<bool>& visited);
    };

void Graph::DFS_until(int n, vector<bool>& visited){
        cout<<n<<" ";
        visited[n] = true;
    for(int neighbor : adj[n]){
        if(!visited[neighbor]){
            DFS_until(neighbor,visited);
        }
    }
}

void Graph::DFS(int n){
    vector<bool> visited(adj.size(),false);//辅助数组
    DFS_until(n,visited);
}

int main() {
    int num_nodes = 6; // 节点数量
    Graph g = Graph(num_nodes);
    g.addEdge(0,2);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    cout << "深度优先搜索: ";
    g.DFS(0); // 从节点 0 开始 BFS
    cout << endl;
    return 0;
}