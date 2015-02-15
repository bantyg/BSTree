typedef struct node Node;
typedef struct bstree BSTree;
struct node{
	int data;
	Node* left;
	Node* right;
};
struct bstree{
 	Node* root;
 	int count;
}; 

Node* createNode(int data);
BSTree createBSTree(void);
int insert(BSTree *, int);
Node * find(BSTree, int);