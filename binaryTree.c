#include<stdio.h>  
#include<stdlib.h>  

typedef struct node {  
    int data;  
    struct node* left;  
    struct node* right;  
} node;  

node* createnode(int data) {  
    node* newnode = (node*)malloc(sizeof(node));  
    newnode->data = data;  
    newnode->left = NULL;  // corrected: assign NULL to left pointer  
    newnode->right = NULL; // corrected: assign NULL to right pointer  
    return newnode;  
}  

node* insertnode(node* root, int data) {  
    if (root == NULL) {  
        root = createnode(data); // corrected function name to createnode  
    } else if (data <= root->data) {  
        root->left = insertnode(root->left, data);  
    } else {  
        root->right = insertnode(root->right, data);  
    }  
    return root;  
}  

void printtree(node* root) {  
    if (root != NULL) {  
        printtree(root->left); // corrected: print left subtree first  
        printf("%d ", root->data); // corrected: space added for readability  
        printtree(root->right);  
    }  
}  

int main() {  
    node* root = NULL;  
    root = insertnode(root, 5);  
    root = insertnode(root, 3);  
    root = insertnode(root, 7);  
    root = insertnode(root, 2);  
    root = insertnode(root, 4);  
    root = insertnode(root, 6);  
    root = insertnode(root, 8);  

    printf("Binary Tree: ");  
    printtree(root);  
    printf("\n");  

    return 0;  
}
