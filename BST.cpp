# data-structures
here is all my data structures codes in c++ For BST
 #include<iostream>
using namespace std;


struct node {

    int a;
    node *right ;
	node *left;

};


class BST{

    public:
    
    node *root ;
	node *temp1 ;
	node *temp2;
    int count = 0;
    
    
    BST()
	{
        root = NULL;
    }

    void insert(int key, node *& root)
	{

        if (root == NULL)
		{

            root = new node;
            root-> a = key;
            root-> left = root -> right = NULL;
            return;
        }

        if (key == root -> a)
		{

            cout<<" No Duplication "<<endl;
            return;
        }

        if (key > root->a)
		{
            insert(key,root->right);
            return;
        }
        if(key < root-> a)
		{

            insert(key,root->left);
            return;
        }


    }


int c_parent(node *root)
{
	if(root == NULL)
		return 0;
		
		
	if(root -> left != NULL)
		c_parent(root->left);
		
	if(root-> left != NULL || root-> right != NULL)
		count++;
	
		
	if(root -> right != NULL)
		c_parent(root->right);
		
		
	return count;
	
}

};


int main(){


    BST tree;

   
    tree.insert(100,tree.root);
    
    tree.insert(50,tree.root);
    tree.insert(150,tree.root);
    tree.insert(75,tree.root);
    tree.insert(125,tree.root);
    tree.insert(74,tree.root);
    tree.insert(76,tree.root);
    tree.insert(73,tree.root);
    tree.insert(124,tree.root);
    tree.insert(130,tree.root);
    tree.insert(131,tree.root);
    tree.c_parent(tree.root);

	cout<<"Total Parent nodes"<<endl;
	cout<<tree.count<<endl;
       

    return 0;
}
