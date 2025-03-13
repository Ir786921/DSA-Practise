#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int data){
   this->data = data;
   this->left = NULL;
   this->right = NULL;
}

};

Node* CreateTree(){
    int data;

    cout << "Enter the Node" << endl;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }
    
    Node* root = new Node(data);

    cout << "enter the node left of  " << root->data << endl;
    root->left = CreateTree();
    cout << "enter the node Right of  " << root->data << endl;
    root->right = CreateTree();

    
    return root;

}

int main(){

    Node*root = CreateTree();
    cout << root->data;
    return 0;

}