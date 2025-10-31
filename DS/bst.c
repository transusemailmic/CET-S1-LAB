// Binar Search Tree

#include <stdio.h>
#include <stdlib.h>
struct bst{
    int data;
    struct bst *lchild;
    struct bst *rchild;
};
struct bst *root;
struct bst* insert(struct bst* root, int value){
    if(root==NULL){
        struct bst* temp=(struct bst*)malloc(sizeof(struct bst));
        temp->data=value;
        printf("Node Inserted Successfully!\n");
        temp->lchild=temp->rchild=NULL;
        return temp;
    }
    if(value==root->data){
        printf("Insertion not possible\n");
    }
    else if(value<root->data){
        root->lchild=insert(root->lchild,value);
    }
    else{
        root->rchild=insert(root->rchild,value);
    }
    return root;
}
struct bst* delete(struct bst* root, int value){
    if(root==NULL){
        printf("Node not Found!\n");
        return root;
    }
    if(value<root->data){
        root->lchild=delete(root->lchild,value);
    }
    else if(value>root->data){
        root->rchild=delete(root->rchild,value);
    }
    else{
        if(root->lchild==NULL&&root->rchild==NULL){
            free(root);
            return NULL;
        }
        else if(root->lchild==NULL){
            struct bst* temp=root->rchild;
            free(root);
            return temp;
        }
        else if(root->rchild==NULL){
            struct bst* temp=root->lchild;
            free(root);
            return temp;
        }
        else{
            struct bst* inSucc=root;
            struct bst* temp=root->rchild;
            while(temp->lchild!=NULL){
                inSucc=temp;
                temp=temp->lchild;
            }
            root->data=inSucc;
        }
    }
    return root;
}
void search(struct bst* root, int value){
    if(root==NULL){
        printf("Node Not Found!\n");
    }
    else if(value==root->data){
        printf("Node Found Successfully!\n");
    }
    else if(value<root->data){
        search(root->lchild,value);
    }
    else{
        search(root->rchild,value);
    }
}
void inorder(struct bst* root){
    if(root!=NULL){
        inorder(root->lchild);
        printf("%d->",root->data);
        inorder(root->rchild);
    }
}
void preorder(struct bst* root){
    if(root!=NULL){
        printf("%d->",root->data);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}
void postorder(struct bst* root){
    if(root!=NULL){
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%d->",root->data);
    }
}

void main(){
    int choice;
    printf("\nBinary Search Tree\n");
    root=NULL;
    while(1){
        printf("\nBST Operations\n");
        printf("Choose an option\n----------------\n");
        printf("1. Insert a node\n");
        printf("2. Delete a node\n");
        printf("3. Search for a node\n");
        printf("4. Inorder Traversal\n");
        printf("5. Preorder Traversal\n");
        printf("6. Postorder Traversal\n");
        printf("7. Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Inserting a node...\n"); printf("Enter the data value for the node: "); int val; scanf("%d",&val); root=insert(root,val); break;
            case 2: printf("Deleting a node...\n"); printf("Enter the node to delete: "); scanf("%d",&val); root=delete(root,val); break;
            case 3: printf("Searching for a node...\n"); printf("Enter the data value to search: "); scanf("%d",&val); search(root,val); break;
            case 4: printf("Performing Inorder Traversal:\n"); inorder(root); break;
            case 5: printf("Performing Preorder Traversal:\n"); preorder(root); break;
            case 6: printf("Performing Postorder Traversal:\n"); postorder(root); break;
            case 7: printf("Exiting program...\n"); exit(0); break;
            default:printf("Invalid Choice\n");
        }
        getc(stdin);getc(stdin);
    }
}




/*

struct bst* deleteNode(struct bst* root, int key) {
    if (root == NULL) {
        printf("Node not found.\n");
        return root;
    }

    if (key < root->data) {
        root->lchild = deleteNode(root->lchild, key);
    } 
    else if (key > root->data) {
        root->rchild = deleteNode(root->rchild, key);
    } 
    else {
        // Node found

        // Case 1: No child
        if (root->lchild == NULL && root->rchild == NULL) {
            free(root);
            return NULL;
        }
        // Case 2: One child
        else if (root->lchild == NULL) {
            struct bst* temp = root->rchild;
            free(root);
            return temp;
        }
        else if (root->rchild == NULL) {
            struct bst* temp = root->lchild;
            free(root);
            return temp;
        }
        // Case 3: Two children
        else {
            // Find inorder successor (smallest in right subtree)
            struct bst* succParent = root;
            struct bst* succ = root->rchild;
            while (succ->lchild != NULL) {
                succParent = succ;
                succ = succ->lchild;
            }
            root->data = succ->data; // Copy successor’s value
            root->rchild = deleteNode(root->rchild, succ->data); // Delete successor
        }
    }
    return root;
}





*/