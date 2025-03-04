#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*bool visited(int ele, vector<bool> visit)
{
    return visit[ele] == 1 ? true : false;
}*/
vector<int> bfs(vector<int> adlist[], int v)
{
    queue<int> q;
    vector<bool> visit(v, 0);
    vector<int> ans;
    q.push(0);
    visit[0] = 1;
    while (!q.empty())
    {
        int ele = q.front();
        q.pop();
        ans.push_back(ele);
        for (int i = 0; i < adlist[ele].size(); i++)
        {
            if (!visit[adlist[ele][i]])
            {
                q.push(adlist[ele][i]);
                visit[adlist[ele][i]] = 1;
            }
        }
    }
    return ans;
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
    /*for (int i = 0; i < vertex; i++)
    {
        cout << i << "->";
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }*/
    vector<int> ans = bfs(mat, vertex);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}