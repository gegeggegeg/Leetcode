#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct TreeNode{
	char val;
	TreeNode *parent;
	TreeNode *left;
	TreeNode *right;
	TreeNode(char x) : val(x), left(NULL), right(NULL), parent(NULL){}
};

TreeNode* InitTree();
void Traverse(TreeNode*, string&);

int main()
{
	TreeNode* root = InitTree();
	string output = "";
	Traverse (root,output);
	cout << output << endl;	
	return 0;
}

TreeNode* InitTree(){
	TreeNode *root =  new TreeNode('5');
	root->left = new TreeNode('3');
	(root->left)->left = new TreeNode('2');
	(root->left)->right = new TreeNode('4');
	(root->left)->parent = root;
	root->right = new TreeNode('6');
	(root->right)->parent = root;
	(root->right)->right = new TreeNode('7');
	return root;
}

void Traverse(TreeNode *node, string &output){
	if (output == ""){
		output.push_back(node->val);
		output.push_back('(');
		output.push_back((node->left)->val);
		output.push_back(')');
		output.push_back('(');
		output.push_back((node->right)->val);
		output.push_back(')');
	}
	else{
		auto iter = find(output.begin(), output.end(), node->val);
		if(node->left != NULL){
			iter = output.insert(iter+1, '(');
			iter = output.insert(iter+1,(node->left)->val);
			iter = output.insert(iter+1, ')');
		}
		if(node->right != NULL){
			iter = output.insert(iter+1, '(');
			iter = output.insert(iter+1, (node->right)->val);
			iter = output.insert(iter+1, ')');
		}
	}
	if (node->left != NULL)
		Traverse(node->left, output);
	if (node->right != NULL)
		Traverse(node->right, output);
}




