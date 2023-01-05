#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};

typedef node *adrNode;
typedef int infotype;

adrNode newNode_1301213467(infotype x);
adrNode findNode_1301213467(adrNode root, infotype x);
void printPreOrder_1301213467(adrNode root);
void printDescendant_1301213467(adrNode root, infotype x);
int sumNode_1301213467(adrNode root);
int countLeaves_1301213467(adrNode root);
adrNode insertNode_1301213467(adrNode root, adrNode new_node);
int heightTree_1301213467(adrNode root);

#endif // TREE_H_INCLUDED
