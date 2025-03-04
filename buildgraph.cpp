#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> directweight(int ver, int e)
{
    vector<vector<int>> mat(ver, vector<int>(e, 0));
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        // directed weighted
        mat[u][v] = w;
        // undirected weighted
        // mat[v][u] = w;
    }
    return mat;
}
vector<vector<int>> directunweight(int ver, int e)
{
    vector<vector<int>> mat(ver, vector<int>(e, 0));
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        // directed weighted
        mat[u][v] = 1;
        // undirected weighted
        // mat[v][u] = 1;
    }
    return mat;
}
void printgraph(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int v, e;
    cin >> v >> e;
    vector<vector<int>> mat = directweight(v, e);
    printgraph(mat);
    return 0;
}