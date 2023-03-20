#include "BSTs_1009263244.c" // your student number

void test_inOrder()
{
	// 1.1: empty list
	// 1.2: one node
	// 1.3: one left child
	// 1.4: one right child
	// 1.5: one left child, one right
	// 1.6: long left side, one node on right
	// 1.7: different bars

	BST_Node* root = NULL;
	BST_Node* new_node = NULL;

	// 1.1
	printf("SELF CHECK: 1.1\n");
	BST_inOrder(root, 0);

	root = newBST_Node(1, 1, 0.5);

	// 1.2
	printf("SELF CHECK: 1.2\n");
	BST_inOrder(root, 0);

	new_node = newBST_Node(1, 1, 0.4);
	root = BST_insert(root, new_node);

	// 1.3
	printf("SELF CHECK: 1.3\n");
	BST_inOrder(root, 0);

	BST_delete(root, 1, 0.4);
	new_node = newBST_Node(1, 1, 0.6); 
	root = BST_insert(root, new_node);
	
	// 1.4
	printf("SELF CHECK: 1.4\n");
	BST_inOrder(root, 0);

	new_node = newBST_Node(1, 1, 0.4); 
	root = BST_insert(root, new_node);
	
	// 1.5
	printf("SELF CHECK: 1.5\n");
	BST_inOrder(root, 0);

	new_node = newBST_Node(1, 1, 0.15);
	root = BST_insert(root, new_node);
	
	new_node = newBST_Node(1, 1, 0.3);
	root = BST_insert(root, new_node);
	
	new_node = newBST_Node(1, 1, 0.2); 
	root = BST_insert(root, new_node);

	// 1.6
	printf("SELF CHECK: 1.6\n");
	BST_inOrder(root, 0);

	new_node = newBST_Node(1, 0, 0.75);
	root = BST_insert(root, new_node);
	
	new_node = newBST_Node(1, 2, 0.1);
	root = BST_insert(root, new_node);
	
	new_node = newBST_Node(1, 3, 0.5);
	root = BST_insert(root, new_node);

	new_node = newBST_Node(1, 5, 0.5);
	root = BST_insert(root, new_node);

	// 1.7
	printf("SELF CHECK: 1.7\n");
	BST_inOrder(root, 0);

	printf("\n");
}

void test_preOrder()
{
	// 2.1: empty list
	// 2.2: one node
	// 2.3: one left child
	// 2.4: one right child
	// 2.5: one left child, one right
	// 2.6: long left side, one node on right
	// 2.7: different bars

	BST_Node* root = NULL;
	BST_Node* new_node = NULL;

	// 2.1
	printf("SELF CHECK: 2.1\n");
	BST_preOrder(root, 0);

	root = newBST_Node(1, 1, 0.5);

	// 2.2
	printf("SELF CHECK: 2.2\n");
	BST_preOrder(root, 0);

	new_node = newBST_Node(1, 1, 0.4);
	root = BST_insert(root, new_node);

	// 2.3
	printf("SELF CHECK: 2.3\n");
	BST_preOrder(root, 0);

	BST_delete(root, 1, 0.4);
	new_node = newBST_Node(1, 1, 0.6); 
	root = BST_insert(root, new_node);
	
	// 2.4
	printf("SELF CHECK: 2.4\n");
	BST_preOrder(root, 0);

	new_node = newBST_Node(1, 1, 0.4); 
	root = BST_insert(root, new_node);
	
	// 2.5
	printf("SELF CHECK: 2.5\n");
	BST_preOrder(root, 0);

	new_node = newBST_Node(1, 1, 0.15);
	root = BST_insert(root, new_node);
	
	new_node = newBST_Node(1, 1, 0.3);
	root = BST_insert(root, new_node);
	
	new_node = newBST_Node(1, 1, 0.2); 
	root = BST_insert(root, new_node);

	// 2.6
	printf("SELF CHECK: 2.6\n");
	BST_preOrder(root, 0);

	new_node = newBST_Node(1, 0, 0.75);
	root = BST_insert(root, new_node);
	
	new_node = newBST_Node(1, 2, 0.1);
	root = BST_insert(root, new_node);
	
	new_node = newBST_Node(1, 3, 0.5);
	root = BST_insert(root, new_node);

	new_node = newBST_Node(1, 5, 0.5);
	root = BST_insert(root, new_node);

	// 2.7
	printf("SELF CHECK: 2.7\n");
	BST_preOrder(root, 0);

	printf("\n");
}

void test_postOrder()
{
	// 3.1: empty list
	// 3.2: one node
	// 3.3: one left child
	// 3.4: one right child
	// 3.5: one left child, one right
	// 3.6: long left side, one node on right
	// 3.7: different bars

	BST_Node* root = NULL;
	BST_Node* new_node = NULL;

	// 3.1
	printf("SELF CHECK: 3.1\n");
	BST_postOrder(root, 0);

	root = newBST_Node(1, 1, 0.5);

	// 3.2
	printf("SELF CHECK: 3.2\n");
	BST_postOrder(root, 0);

	new_node = newBST_Node(1, 1, 0.4);
	root = BST_insert(root, new_node);

	// 3.3
	printf("SELF CHECK: 3.3\n");
	BST_postOrder(root, 0);

	BST_delete(root, 1, 0.4);
	new_node = newBST_Node(1, 1, 0.6); 
	root = BST_insert(root, new_node);
	
	// 3.4
	printf("SELF CHECK: 3.4\n");
	BST_postOrder(root, 0);

	new_node = newBST_Node(1, 1, 0.4); 
	root = BST_insert(root, new_node);
	
	// 3.5
	printf("SELF CHECK: 3.5\n");
	BST_postOrder(root, 0);

	new_node = newBST_Node(1, 1, 0.15);
	root = BST_insert(root, new_node);
	
	new_node = newBST_Node(1, 1, 0.3);
	root = BST_insert(root, new_node);
	
	new_node = newBST_Node(1, 1, 0.2); 
	root = BST_insert(root, new_node);

	// 3.6
	printf("SELF CHECK: 3.6\n");
	BST_postOrder(root, 0);

	new_node = newBST_Node(1, 0, 0.75);
	root = BST_insert(root, new_node);
	
	new_node = newBST_Node(1, 2, 0.1);
	root = BST_insert(root, new_node);
	
	new_node = newBST_Node(1, 3, 0.5);
	root = BST_insert(root, new_node);

	new_node = newBST_Node(1, 5, 0.5);
	root = BST_insert(root, new_node);

	// 3.7
	printf("SELF CHECK: 3.7\n");
	BST_postOrder(root, 0);

	printf("\n");
}


int main()
{
	test_inOrder();
	test_preOrder();
	test_postOrder();
}
