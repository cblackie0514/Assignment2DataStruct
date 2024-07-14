//cblackie0514 data structures assignment 2 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "binary.h"

#define CHAR_COUNT (rand() % 10 + 11) // Generate a random number from 11 to 20

int main() {
    Node* root = NULL;
    char chars[20];
    
    // Seed the random number generator
    srand(time(NULL));

    // Insert random characters into the tree
    for (int i = 0; i < CHAR_COUNT; i++) {
        chars[i] = 'a' + (rand() % 26); // Random character between 'a' and 'z'
        root = insert(root, chars[i]);
    }

    // Print characters in sorted order
    printf("Inserted characters in sorted order: ");
    inorder(root);
    printf("\n");

    // Print the number of nodes and the tree height
    printf("Number of nodes in the tree: %d\n", countNodes(root));
    printf("Height of the tree: %d\n", treeHeight(root));

    return 0;
}