#include<bits/stdc++.h>
using namespace std;




struct Node
{
    struct Node * left;
    int data;
    struct Node * right;
};

struct Node *root = NULL;

void inorder(struct Node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);

    // Traverse root
    cout << root->data << " -> ";

    // Traverse right
    inorder(root->right);
  }
}


struct Node* newNode(int val)
{
    Node *temp = new Node();
    temp->data = val;
    temp->right = NULL;
    temp->left = NULL;
    return temp;
}
void Insert(int val)
{
    if(root == NULL)
    {
        root = newNode(val);
    }
    else if(val < root->data)
        Insert(val);
    else
        root->right = Insert(root->right,val);
}



int main()
{


    Insert(10);
    Insert(5);
    Insert(20);

    inorder();

    return 0;
}

