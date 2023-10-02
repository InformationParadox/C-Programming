#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

struct Vertex
{
    int v;
    int weight;
};

void addEdge(vector<vector<Vertex>> &graph, int u, int v, int weight)
{
    graph[u].push_back({v, weight});
    graph[v].push_back({u, weight});
}

void primMST(vector<vector<Vertex>> &graph, int V)
{

    int src = 0;

    vector<int> key(V, INT_MAX);

    vector<int> parent(V, -1);

    vector<bool> inMST(V, false);

    key[src] = 0;

    for (int i = 0; i < V - 1; ++i)
    {

        int u, minKey = INT_MAX;
        for (int v = 0; v < V; ++v)
        {
            if (!inMST[v] && key[v] < minKey)
            {
                minKey = key[v];
                u = v;
            }
        }

        inMST[u] = true;

        for (const auto &neighbor : graph[u])
        {
            int v = neighbor.v;
            int weight = neighbor.weight;

            if (!inMST[v] && weight < key[v])
            {
                key[v] = weight;
                parent[v] = u;
            }
        }
    }

    cout << "Minimum Spanning Tree:" << endl;
    for (int i = 1; i < V; ++i)
        cout << parent[i] << " - " << i << endl;
}

int main()
{
    int V, E;
    cout << "Enter the number of vertices: ";
    cin >> V;
    cout << "Enter the number of edges: ";
    cin >> E;

    vector<vector<Vertex>> graph(V);

    cout << "Enter edges and their weights:" << endl;
    for (int i = 0; i < E; ++i)
    {
        int u, v, weight;
        cin >> u >> v >> weight;
        addEdge(graph, u, v, weight);
    }

    primMST(graph, V);

    return 0;
}
