#include<iostream>
using namespace std;

class Node{
public:
int data;
Node*next;


Node(int val){
    this->data = val;
    this->next = NULL;
}
   
};

class Queue {
    public:
    Node* front;
    Node*rear;

    Queue(){
        front = NULL;
        rear = NULL;
    }


    void push(int val){
       

        if (front == NULL)
        {
             Node* temp = new Node(val);
             front = rear = temp;
        }
        else
        {
            Node* temp = new Node(val);
            rear->next = temp;
            rear = temp;
        }
        
        
        
       

    }

    void pop(){
        if (front == NULL)
        {
            cout << "Queue is empty Can not pop";
            return;
        }
        Node* temp = front;
        front = front->next;
        delete temp;

        if (front == NULL) {
            rear = NULL;
        }
        
    }

    void display(){
        Node* temp = front;

        while (temp != NULL)
        {
            cout << temp->data << " " ;
            temp = temp->next;
        }
        cout << endl;
        
    }
};

















int main(){

    Queue q;
    q.push(5);
    q.push(15);
    q.push(20);
    q.push(25);

    q.pop();
    q.display();

  



    
    return 0;
}