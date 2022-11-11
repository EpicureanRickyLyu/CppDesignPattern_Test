#pragma once
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};

// Traverse Preorder
void traversePreOrder(struct node* temp) {
    if (temp != NULL) {
        cout << " " << temp->data;
        traversePreOrder(temp->left);
        traversePreOrder(temp->right);
    }
}

// Traverse Inorder
void traverseInOrder(struct node* temp) {
    if (temp != NULL) {
        traverseInOrder(temp->left);
        cout << " " << temp->data;
        traverseInOrder(temp->right);
    }
}
    
//iterator inorder (left center right)
vector<int> inorderTraversal(node* root) {
    vector<int> res;
    stack<node*> st;
    node* cur = root;
    while (cur != nullptr || !st.empty())
    {
        while (cur != nullptr)
        {
            st.push(cur);
            cur = cur->left;//left
        }
        cur = st.top();
        res.push_back(cur->data);//center
        st.pop();
        cur = cur->right;//right

    }
    return res;
}


vector<int> IteratorLayertraverse(struct node* root)
{
    queue<node*> q;
    vector<int> res;
    q.push(root);
    while (!q.empty())
    {
        int num = 0;
        num = q.size();
        while (num)
        {
            node* temp = q.front();
            if (!temp)
                break;
            q.push(temp->left);
            q.push(temp->right);
            res.push_back(temp->data);
            q.pop();
            num--;
        }
    }
    return res;
}

// Traverse Postorder
void traversePostOrder(struct node* temp) {
    if (temp != NULL) {
        traversePostOrder(temp->left);
        traversePostOrder(temp->right);
        cout << " " << temp->data;
    }
}