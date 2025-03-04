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
void zigzag(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->val << endl;
            if (temp->right)
            {
                q.push(temp->right);
            }
            if (temp->left)
            {
                q.push(temp->left);
            }
        }
    }
}
int main()
{
    Node *root;
    root = buildtree(root);
    zigzag(root);
    return 0;
}