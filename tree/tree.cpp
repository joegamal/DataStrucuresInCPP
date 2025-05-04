#include"tree.h"

using namespace std;



tree::tree()
{
    root = nullptr;
    count = 0;
}



void tree::checkNode(Node* current, int val)
{
    if(val > current->data)
    {
        if(current->right == nullptr)
        {
            Node* node = new Node();
            node->data = val;
            node->left = nullptr;
            node->right = nullptr;
            current->right = node;
            return;
        }
        checkNode(current->right, val);
    }
    else if(val < current->data)
    {
        if(current->left == nullptr)
        {
            Node* node = new Node();
            node->data = val;
            node->left = nullptr;
            node->right = nullptr;
            current->left = node;
            return;
        }
        checkNode(current->left, val);
    }
}



void tree::add(int val)
{
    if(count == 0)
    {
        Node* node = new Node();
        root = node;
        root->data = val;
        count++;
        return;
    }

    checkNode(root, val);
    count++;

}



Node* tree::search(Node* current ,int val)
{
    if(current->data == val)
    {
        return current;
    }
    if(val > current->data)
    {
        if(current->right == nullptr)
        {
            return nullptr;
        }

        return search(current->right, val);
    }
    if(val < current->data)
    {
        if(current->left == nullptr)
        {
            return nullptr;
        }
        return search(current->left, val);
    }
    return nullptr;
}

void tree::deleteNode(Node* node)
{
    if (node == nullptr)
        return;
        
    deleteNode(node->left);
    deleteNode(node->right);
    
    delete node;
}

tree::~tree()
{
    deleteNode(root);
    root = nullptr;
    count = 0;
}