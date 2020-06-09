#include <iostream>
using namespace std;

struct node{
	int value;
  string word;
	node *left;
	node *right;
};

class btree{
  public:
    btree(){root = NULL;};
    ~btree(){destroy_tree();};
    void insert(int key, string name);
    node *search(int key);
    void destroy_tree();
    void inorder_print();
    void treedel(int key);
  private:
    void destroy_tree(node *leaf);
    void insert(int key, string name, node *leaf);
    node *search(int key,node *leaf);
    void inorder_print(node *leaf);
    node *root;
    node* findMinNode(node* root);
    node* treedelete(node* root, int value);
};
