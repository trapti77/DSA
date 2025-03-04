#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool iscycleusingdfs(vector<int> adlist[], int v, int parent, int node, vector<bool> &visit)
{
    visit[node] = 1;
    for (int i = 0; i < adlist[node].size(); i++)
    {
        if (parent == adlist[node][i])
        {
            continue;
        }
        if (visit[adlist[node][i]] == 1)
        {
            return true;
        }
        if (iscycleusingdfs(adlist, v, node, adlist[node][i], visit))
        {
            return true;
        }
    }
    return false;
}
bool iscycle(vector<int> adlist[], int vertex)
{
    vector<bool> visit(vertex, 0);
    for (int i = 0; i < vertex; i++)
    {
        if (!visit[i] && iscycleusingdfs(adlist, vertex, -1, i, visit))
        {
            return true;
        }
    }
    return false;
}
bool isloop(vector<int> adlist[], int node, int vertex, int parent, vector<bool> &visit)
{
    visit[node] = 1;
    for (int i = 0; i < adlist[node].size(); i++)
    {
        if (parent == adlist[node][i])
        {
            continue;
        }
        if (isloop(adlist, adlist[node][i], vertex, node, visit))
        {
            return true;
        }
    }
    return false;
}
bool iscycleusingbfs(vector<int> adlist[], int vertex)
{
    vector<bool> visit(vertex, 0);
    for (int i = 0; i < vertex; i++)
    {
        if (!visit[i] && isloop(adlist, 0, vertex, -1, visit))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int vertex, e;
    cin >> vertex >> e;
    vector<int> mat[vertex];
    int u, v;
    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        mat[u].push_back(v);
        mat[v].push_back(u);
    }
    vector<bool> visit(vertex, 0);
    // if (iscycle(mat, vertext));
    if (iscycleusingbfs(mat, vertex))
    {
        cout << "cycle present" << endl;
    }
    else
    {
        cout << "cycle not present" << endl;
    }
    return 0;
}