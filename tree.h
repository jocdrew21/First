#ifndef __tree__
#define __tree__

#include <iostream>


class tree
{
private:
    
    struct node
    {
        int number;
        node* left;
        node* right;
    };
    
    node* root;
    void insert(int key,node* leaf);
    int search(int key, node* leaf);
    void destroy_tree(node*);
    
public:
    
    tree();
    void insert(int);
    int search(int);
    void destroy_tree();
};

#endif