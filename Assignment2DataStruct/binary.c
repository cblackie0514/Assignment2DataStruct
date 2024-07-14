//cblackie0514 data structures assignment 2 
#include <stdio.h>
#include <stdlib.h>
#include "binary.h"

// Function to create a new node
Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert a character into the BST
Node* insert(Node* root, char data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) { // if data is less than root than insert it on the left side 
        root->left = insert(root->left, data);
    }
    else if (data > root->data) { // if data is more than root than insert it on the right side
        root->right = insert(root->right, data);
    }
    return root;
}

// Search for a character in the BST
Node* search(Node* root, char data) {
    if (root == NULL || root->data == data) {
        return root;
    }
    if (data < root->data) { 
        return search(root->left, data);
    }
    return search(root->right, data);
}

// Count the number of nodes in the BST
int countNodes(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int totalNodes = 1 + countNodes(root->left) + countNodes(root->right);
    return totalNodes;
}

// Determine the height of the BST
int treeHeight(Node* root) {
    if (root == NULL) {
        return -1; // Height of an empty tree is -1
    }
    int leftHeight = treeHeight(root->left);
    int rightHeight = treeHeight(root->right);
    int totalHeight = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
    return totalHeight;
}

// In-order traversal to print the BST in sorted order
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%c ", root->data);
        inorder(root->right);
    }
}