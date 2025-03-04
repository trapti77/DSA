#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<pair<int, int>>> directweight(int ver, int e)
{
    vector<vector<pair<int, int>>> mat(ver);
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        // directed weighted
        mat[u].push_back(make_pair(v, w));
        // undirected weighted
        // mat[v][u] = w;
    }
    return mat;
}
vector<vector<pair<int, int>>> directunweight(int ver, int e)
{
    vector<vector<pair<int, int>>> mat(ver);
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        // undirected weighted
        mat[u].push_back(make_pair(v, w));
        mat[v].push_back(make_pair(u, w));
    }
    return mat;
}
void printgraph(vector<vector<pair<int, int>>> &mat, int vertex)
{
    for (int i = 0; i < vertex; i++)
    {
        cout << i << "->";
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << "(" << mat[i][j].first << "," << mat[i][j].second << ")" << " ";
        }
        cout << endl;
    }
}
int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<pair<int, int>>> mat = directunweight(v, e);
    printgraph(mat, v);
    return 0;
}