#include <iostream>
#include <vector>

using namespace std;

struct TreeNode{
	int val;
	TreeNode *parent;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL), parent(NULL){}
};

TreeNode* InitTree();
void Traverse(TreeNode*, vector<TreeNode*>&);

int main()
{
	TreeNode* root = InitTree();
	vector<TreeNode*> tvec{};
	Traverse (root, tvec);
	int input;
	cout << "Please enter a number:\t";
	cin	>>input;
	for(auto element:tvec){
		for (auto element2:tvec){
			if(element != element2 && element->val+element2->val == input){
				cout << "True"<< endl;
				return 0;
			}
		}
	}
	cout << "false" << endl;
	return 0;
}

TreeNode* InitTree(){
	TreeNode *root =  new TreeNode(5);
	root->left = new TreeNode(3);
	(root->left)->left = new TreeNode(2);
	(root->left)->right = new TreeNode(4);
	(root->left)->parent = root;
	root->right = new TreeNode(6);
	(root->right)->parent = root;
	(root->right)->right = new TreeNode(7);
	return root;
}

void Traverse(TreeNode *node, vector<TreeNode*> &vec){
	if (node->left != NULL)
		Traverse(node->left, vec);
	if (node->right != NULL)
		Traverse(node->right, vec);
	vec.push_back(node);
	//cout << vec.back()->val << endl;
}




