#include "Tree.h"

adrNode newNode_1301213467(infotype x){
    adrNode p = new node;
    p -> data = x;
    p -> left = NULL;
    p -> right = NULL;
    return p;
}

adrNode findNode_1301213467(adrNode root, infotype x){
    if (root == NULL){
        return NULL;
    } if (root -> data == x){
        return root;
    }
    adrNode p = findNode_1301213467(root -> left, x);
    if (p != NULL){
        return p;
    }
    return findNode_1301213467(root -> right, x);
}

void printPreOrder_1301213467(adrNode root){
    if (root == NULL){
        return;
    }
    cout << root -> data << " ";
    printPreOrder_1301213467(root -> left);
    printPreOrder_1301213467(root -> right);
}

void printDescendant_1301213467(adrNode root, infotype x){
    adrNode p = findNode_1301213467(root, x);
    if (p == NULL){
        cout <<"Tidak ada Node." << endl;
    }
    printPreOrder_1301213467(p->left);
    printPreOrder_1301213467(p->right);
}

int sumNode_1301213467(adrNode root){
    if (root == NULL){
        return 0;
    }
    return root -> data + sumNode_1301213467(root -> left) + sumNode_1301213467(root -> right);
}

int countLeaves_1301213467(adrNode root){
    if (root == NULL){
        return 0;
    }
    if (root -> left == NULL && root -> right == NULL){
        return 1;
    }
    return countLeaves_1301213467(root -> left) + countLeaves_1301213467(root -> right);
}

adrNode insertNode_1301213467(adrNode root, adrNode new_node){
    if (root == NULL) {
        return new_node;
    }
    if (new_node -> data < root -> data) {
        root -> left = insertNode_1301213467(root -> left, new_node);
    } else {
        root -> right = insertNode_1301213467(root -> right, new_node);
    }
    return root;
}

int heightTree_1301213467(adrNode root){
    if (root == NULL){
        return 0;
    }
    int left_height = heightTree_1301213467(root -> left);
    int right_height = heightTree_1301213467(root -> right);
    return max(left_height, right_height) + 1;
}
