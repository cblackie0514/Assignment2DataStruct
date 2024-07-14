//cblackie0514 data structures assignment 2 
#pragma once

typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;
} Node;

// Function declarations
Node* createNode(char data);
Node* insert(Node* root, char data);
Node* search(Node* root, char data);
int countNodes(Node* root);
int treeHeight(Node* root);
void inorder(Node* root);

