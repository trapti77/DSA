#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->val = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *buildtree(Node *root)
{
    cout << "enter root value" << endl;
    int d;
    cin >> d;
    root = new Node(d);
    if (d == -1)
    {
        return NULL;
    }
    cout << "enter left value" << endl;
    root->left = buildtree(root->left);
    cout << "enter right value" << endl;
    root->right = buildtree(root->right);
    return root;
}
void printtree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    printtree(root->left);
    printtree(root->right);
}
int posi(vector<int> &in, int val)
{
    for (int i = 0; i < in.size(); i++)
    {
        if (in[i] == val)
        {
            return i;
        }
    }
    return -1;
}
Node *solve(vector<int> &pre, vector<int> &in, int &id, int start, int end, int n)
{
    if (id >= n || start > end)
        return NULL;

    int ele = pre[id++];
    Node *root = new Node(ele);
    int pos = posi(in, ele);
    root->left = solve(pre, in, id, start, pos - 1, n);
    root->right = solve(pre, in, id, pos + 1, end, n);
    return root;
}
Node *solve1(vector<int> &post, vector<int> &in, int &id, int start, int end, int n)
{
    if (id < 0 || start > end)
        return NULL;

    int ele = post[id--];
    Node *root = new Node(ele);
    int pos = posi(in, ele);
    root->left = solve1(post, in, id, start, pos - 1, n);
    root->right = solve1(post, in, id, pos + 1, end, n);
    return root;
}
Node *pretoin(vector<int> &pre, vector<int> &in)
{
    int n = pre.size();
    int id = 0;
    return solve(pre, in, id, 0, n - 1, n);
}
Node *posttoin(vector<int> &post, vector<int> &in)
{
    int n = post.size();
    int id = n - 1;
    return solve1(post, in, id, 0, n - 1, n);
}

int main()
{
    vector<int> pre;
    vector<int> in;
    vector<int> post;
    int n;
    cin >> n;
    cout << "enter preorder" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> pre[i];
    }
    cout << endl
         << "enter inorder" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> in[i];
    }
    cout << endl
         << "enter postorder" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> post[i];
    }
    Node *root1 = pretoin(pre, in);
    Node *root2 = posttoin(post, in);
    printtree(root1);
    cout << endl;
    printtree(root2);
    return 0;
}