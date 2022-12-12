#include<bits/stdc++.h>
using namespace std;



class Node{
public:
     Node *left, *right;
     int data;

      Node(int n)
     {
         left = NULL;
         right = NULL;
         data = n;
     }
 };


Node *root = NULL;

Node * Insert(Node* node, int data)
     {
         if (node == NULL)
             node = new Node(data);
         else
         {
             if (data <= node->data)
                 node->left = Insert(node->left, data);
             else
                 node->right = Insert(node->right, data);
         }
         return node;
     }

      void Insert(int data)
     {
         root = Insert(root, data);
     }
     /* Function to insert data recursively */

  void inorder(Node* r)
     {
         if (r != NULL)
         {
             inorder(r->left);
             cout<<r->data<<" ";
             inorder(r->right);
         }
     }



void preorder(Node* r)
     {
         if (r != NULL)
         {
            cout<<r->data<<" ";
             preorder(r->left);
             preorder(r->right);
         }
     }


     /* Function for postorder traversal */

      void postorder(Node* r)
     {
         if (r != NULL)
         {
             postorder(r->left);
             postorder(r->right);
             cout<<r->data<<" ";
         }
     }


int main()
{


Insert(10);
Insert(5);
Insert(20);
postorder(root);


    return 0;
}

