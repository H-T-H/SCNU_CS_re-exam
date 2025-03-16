//图的广度优先
#include<iostream>
#include<vector>
#include<queue>
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
        void BFS(int start_node);
    };

void Graph::BFS(int n){
    vector<bool> visited(adj.size(),false);//辅助数组
    queue<int>  q;//辅助队列
    q.push(n);
    while(!q.empty()){
        if(!visited[q.front()]){
            cout<<q.front();
            visited[q.front()] = true;
            for(int neighbor:adj[q.front()]){
                if(!visited[neighbor]){
                    q.push(neighbor);
                }
            }
        }
        q.pop();
    }
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
    cout << "广度优先搜索: ";
    g.BFS(0); // 从节点 0 开始 BFS
    cout << endl;
    return 0;
}