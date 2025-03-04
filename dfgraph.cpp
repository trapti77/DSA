#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adlist[], int v, int node, vector<bool> &visit, vector<int> &ans)
{
    visit[node] = 1;
    ans.push_back(node);
    for (int i = 0; i < adlist[node].size(); i++)
    {
        if (!visit[adlist[node][i]])
        {
            visit[adlist[node][i]] = 1;
            dfs(adlist, v, adlist[node][i], visit, ans);
        }
    }
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
    vector<bool> visit(v, 0);
    vector<int> ans;
    dfs(mat, vertex, 0, visit, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}