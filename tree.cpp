#include "tree.h"

tree::tree()
{
    root = NULL;
}

void tree::destroy_tree(node* leaf)
{
    if (leaf != NULL)
    {
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}
void tree::destroy_tree()
{
    destroy_tree(root);
}

void tree::insert(int key,node* leaf)
{
    if (key < leaf->number)
    {
        if (leaf->left != NULL)
        {
            insert(key,leaf->left);
        }
        else
        {
            leaf->left = new node;
            leaf->left->number = key;
            leaf->left->left = NULL;
            leaf->left->right = NULL;
        }
    }
    else if(key >= leaf->number)
    {
        if (leaf->right != NULL)
        {
            insert(key,leaf->right);
        }
        else
        {
            leaf->right = new node;
            leaf->right->number = key;
            leaf->right->left = NULL;
            leaf->right->right = NULL;
        }
    }
}
void tree::insert(int key)
{
    if (root != NULL)
    {
        insert(key,root);
    }
    else
    {
        root = new node;
        root->number = key;
        root->left = NULL;
        root->right = NULL;
    }
    
}
int tree::search(int key, node* leaf)
{
    if (leaf != NULL)
    {
        if (key == leaf->number)
        {
            return key;
        }
        if (key < leaf->number)
        {
            return search(key,leaf->left);
        }
        else
        {
            return search(key,leaf->right);
        }
    }
    else
    
        std::cout<<"Number was not found.....\n";
        return NULL;
    
}

int tree::search(int key)
{
    if (root != NULL)
    {
        return search(key,root);
    }
    else
    {
        root = new node;
        root->number=key;
        root->left=NULL;
        root->right=NULL;
    }
    return NULL;
}