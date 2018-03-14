#include <iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
	TreeNode() : val(0), left(NULL), right(NULL){};
};

TreeNode* TreeValsum(TreeNode*, TreeNode*);
void Treeprint(TreeNode*);

int main()
{
	TreeNode *Tree1 = new TreeNode(1);	
	Tree1->left = new TreeNode(3);
	Tree1->right = new TreeNode(2);	
	Tree1->left->left = new TreeNode(5);
	//Treeprint(Tree1);
	
	TreeNode *Tree2 = new TreeNode(2);
	Tree2->left = new TreeNode(1);
	Tree2->right = new TreeNode(3);
	Tree2->left->right = new TreeNode(4);
	Tree2->right->right = new TreeNode(7);
	//Treeprint(Tree2);

	
	TreeNode *outputTree = new TreeNode;
	outputTree = TreeValsum(Tree1, Tree2);
	Treeprint(outputTree);
	
	delete Tree1;
	delete Tree2;
	delete outputTree;
		
	return 0;
}

TreeNode* TreeValsum(TreeNode *tree1, TreeNode *tree2){
	TreeNode *output = new TreeNode(0);
	
	if(tree1 == NULL)
		output->val = tree2->val;
	else if (tree2 == NULL)
		output->val = tree1->val;
	else
		output->val = tree1->val + tree2->val;
		
	if (tree1->left != NULL || tree2->left != NULL){
		output->left = new TreeNode(0);
		if (tree1->left == NULL)
			output->left = TreeValsum(new TreeNode(0), tree2->left);
		else if(tree2-> left == NULL)
			output->left = TreeValsum(tree1->left, new TreeNode(0));
		else
			output->left = TreeValsum(tree1->left, tree2->left);
	}
	if (tree1->right != NULL || tree2->right != NULL){
		output->right = new TreeNode(0);
		if (tree1-> right == NULL)
        	output->right = TreeValsum(new TreeNode(0), tree2->right);
        else if(tree2-> right == NULL)
            output->right = TreeValsum(tree1->right, new TreeNode(0));
        else
			output->right = TreeValsum(tree1->right, tree2->right);
	}
	
	return output;
}

void Treeprint(TreeNode *tree){
	if (tree->left != NULL)
		Treeprint(tree->left);
	if (tree->right != NULL){
		Treeprint(tree->right);
	}
	cout << tree->val << endl;
}
