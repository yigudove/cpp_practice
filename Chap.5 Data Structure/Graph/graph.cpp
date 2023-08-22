#include <iostream>
#include <vector>
using namespace std;

// 定义图的邻接表表示
class Graph
{
public:
    int numVertices; // 图中顶点的数量
    vector<vector<int>> adjLists; // 邻接表
    vector<bool> visited; // 记录顶点是否被访问过

public:
    Graph(int vertices); // 构造函数
    void addEdge(int src, int dest); // 添加边
    void DFS(int vertex); // 深度优先搜索
};

// 构造函数
Graph::Graph(int vertices)
{
    numVertices = vertices;
    adjLists.resize(vertices);
    visited.resize(vertices);
}

// 添加边
void Graph::addEdge(int src, int dest)
{
    // 检查 src 和 dest 是否超出了当前邻接表的大小
    int maxVertex = max(src, dest);
    if (maxVertex >= numVertices)
    {
        // 调整邻接表和 visited 数组的大小
        adjLists.resize(maxVertex + 1);
        visited.resize(maxVertex + 1);
        numVertices = maxVertex + 1;
    }

    // 添加边
    adjLists[src].push_back(dest);
}

// 深度优先搜索
void Graph::DFS(int vertex)
{
    visited[vertex] = true;
    cout << vertex << " ";

    for (int i = 0; i < adjLists[vertex].size(); i++)
    {
        int adjVertex = adjLists[vertex][i];
        if (!visited[adjVertex])
        {
            DFS(adjVertex);
        }
    }
}

int main()
{
    Graph g(3);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);

    cout << "深度优先搜索结果: ";
    g.DFS(0);

    return 0;
}
