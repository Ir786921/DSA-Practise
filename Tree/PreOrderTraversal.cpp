#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *CreateTree()
{
    int data;
    cout << "Enter the Node" << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "Enter the Node to the Left of" << " " << root->data << endl;

    root->left = CreateTree();

    cout << "Enter the Node to the right of" << " " << root->data << endl;

    root->right = CreateTree();

    return root;
}

void PreOrderTraversal(Node *root)
{

    // preorder means NLR
    // Base Case
    if (root == NULL)
    {
        return;
    }
    // N
    cout << root->data << endl;

    // L

    PreOrderTraversal(root->left);

    // R

    PreOrderTraversal(root->right);
}

void InOrderTraversal(Node *root)
{

    // Inorder means NLR
    // Base Case
    if (root == NULL)
    {
        return;
    }

    // L

    InOrderTraversal(root->left);

    // N

    cout << root->data << endl;

    // R

    InOrderTraversal(root->right);
}


void PostOrderTraversal(Node *root)
{

    // Postorder means NLR
    // Base Case
    if (root == NULL)
    {
        return;
    }

    // L

    PostOrderTraversal(root->left);

    

    // R

    PostOrderTraversal(root->right);


    // N

    cout << root->data << endl;
}

int main()
{

    Node *root = CreateTree();

    cout << "Printing PreOder Traversal" << endl;
    PreOrderTraversal(root);
    cout << endl;

    cout << "Printing Inorder Traversal" << endl;
    InOrderTraversal(root);
    cout << endl;


    cout << "Printing Preorder Traversal" << endl;
    InOrderTraversal(root);
    cout << endl;
    return 0;
}