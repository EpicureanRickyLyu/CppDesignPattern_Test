#pragma once
#include <iostream>
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

// Traverse Postorder
void traversePostOrder(struct node* temp) {
    if (temp != NULL) {
        traversePostOrder(temp->left);
        traversePostOrder(temp->right);
        cout << " " << temp->data;
    }
}