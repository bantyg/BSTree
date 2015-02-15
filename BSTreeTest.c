#include "BSTree.h"
#include "expr_assert.h"
#include <stdio.h>


void test_to_create_node_for_tree(){
	int data = 5;
	Node* node = createNode(data);
	assertEqual(node->data,5);
	assert(node->left==NULL);
	assert(node->right==NULL);
}

void test_to_create_binary_search_tree(){
	int data = 5;
	BSTree tree = createBSTree();
	assert(tree.root==NULL);
}

	void test_to_indert_data_in_binary_search_tree(){
		int data = 5;
		BSTree tree = createBSTree();
		assertEqual(insert(&tree,data),1);
		assertEqual((tree.root->data),5);
	}

void test_to_insert_data_at_left_side_of_binary_search_tree(){
	int root = 5,data = 4;
	BSTree tree = createBSTree();
	assertEqual(insert(&tree,root),1);
	assertEqual(tree.root->data,5);
	assertEqual(insert(&tree,data),2);
}

void test_createBSTree_creates_a_tree_with_NULL_root(){
	BSTree tree = createBSTree();
	assert(tree.root == NULL);
	assert(tree.count == 0);
}

void test_insert_inserts_5_as_root_of_the_tree_when_root_is_NULL_and_returns_1(){
	BSTree t = createBSTree();
	insert(&t, 4);
	assert(t.root->data == 4);
	assert(t.count == 1);
}

void test_insert_inserts_at_left_when_root_5_and_2_sent_to_insert_and_returns_2_as_number_of_nodes_in_the_tree(){
	BSTree t = createBSTree();
	insert(&t, 5);
	assert(t.root->data == 5);
	insert(&t, 4);
	assertEqual(t.root->left->data, 4);
	assertEqual(t.count, 2);
}

void test_insert_inserts_at_right_when_root_5_and_6_sent_to_insert_and_returns_number_of_nodes_in_the_tree(){
	BSTree t = createBSTree();
	insert(&t, 5);
	assert(t.root->data == 5);
	assert(insert(&t, 6) == 2);	
	assertEqual(t.root->right->data, 6);
	assertEqual(t.count, 2);
}