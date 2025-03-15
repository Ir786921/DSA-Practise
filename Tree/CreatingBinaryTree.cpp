#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

};

Node* createNode(){
    Node* root = new Node(10);
 
    return root;

}

void InsertNode(Node* &root,int key){
    if (root == NULL) {
        root = new Node(key);  
        return;
    }

    Node*temp = root;
    Node*tail = NULL;

    while (temp!=NULL)
    {

        tail = temp;
         if(temp->data == key){
            return;
         }

         if (temp->data < key)
         {  
            temp = temp->next;
        
         }else {
            temp = temp->prev;
        }


         
         
    }

    Node* newNode = new Node(key);
   
    cout << tail->data << " " << endl;

    cout << "key" << newNode ->data;

    if (tail->data < key)
    {
         tail->next = newNode;
         newNode->prev = tail;
    }
    else
    {
        tail->prev = newNode;
        newNode->next = tail;
    }
    
    
    



    
}

void PrintInorder(Node* root) {
    if (root == NULL) return;

    PrintInorder(root->prev);  
    cout << root->data << " ";  
    PrintInorder(root->next);  
}

int main(){

    Node* root = createNode();
    InsertNode(root,25);
    cout << "Inorder Traversal: ";
    PrintInorder(root);
    
    return 0;

}