#include "BSTree.h"
#include <stdlib.h>
#include <stdio.h>

Node* createNode(int data){
	Node *node = calloc(1,sizeof(Node));
	node->data = data;
	return node;	
}

BSTree createBSTree(){
	BSTree tree = {NULL,0};
	return tree;
}

void insertData(Node **root,Node *node ){
	if(*root == NULL){
		*root = node;
	}
	if(node->data < (*root)->data ){
		insertData(&(*root)->left, node);
	}
	if(node->data > (*root)->data ){
		insertData(&(*root)->right, node);
	}
}

int insert(BSTree *tree, int data){
	Node* node = createNode(data);
	insertData(&tree->root,node);
	return ++tree->count;
}
