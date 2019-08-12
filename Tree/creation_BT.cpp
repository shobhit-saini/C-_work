#include<iostream>
using namespace std;
	class node
	{
		public:
		int data;
		node* left;
		node* right;
		node(int data);
	};
	node::node(int data)
	{
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
	int main()
	{
		node *root;
		root = new node(1);
		root->left = new node(2);
		root->right = new node(3);
		root->left->left = new node(4);
	}
