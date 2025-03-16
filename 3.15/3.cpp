//有向无环图的拓扑排序
//卡恩算法
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    public:
        vector<vector<int>> adj;//邻接表
        vector<int>         inDegree;//统计入度
        int v;//顶点个数
        Graph(int v): v(v){
            adj.resize(v);
            inDegree.resize(v,0);
        };
        void addEdge(int node1,int node2){
            adj[node1].push_back(node2);
            inDegree[node2]++;
        }
        void topologicalSortKahn();
    };

void Graph::topologicalSortKahn(){
    queue<int> zeroIndegree;
    for(int i:inDegree){
        if(i == 0){
            zeroIndegree.push(i);
        }
    }
    while(!zeroIndegree.empty()){
        cout<<zeroIndegree.front()<<" ";
        for(int i:adj[zeroIndegree.front()]){
            if(--inDegree[i] == 0){
                zeroIndegree.push(i);
            }
        }
        zeroIndegree.pop();
    }

}

int main() {
    int num_nodes = 7; // 节点数量
    Graph g = Graph(num_nodes);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(4,5);
    g.addEdge(4,6);
    cout << "拓扑排序: ";
    g.topologicalSortKahn();
    cout << endl;
    return 0;
}