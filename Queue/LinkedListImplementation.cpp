#include<iostream>
using namespace std;

class Node{
public:
int data;
Node*next;


Node(int val){
    this->data = val;
    Node*next = NULL;
}
   
};

class Node{
    public:
    int data;
    Node*next;
    
    
    Node(int val){
        this->data = val;
        Node*next = NULL;
    }
       
    };

class Queue
{

public:
    Node *front ;
    Node *rear;

 Queue(){
    front = nullptr;
    rear = nullptr;
 }
};





void Enqueue(Queue &q,int data){

Node *temp = new Node(data);
  temp->next = nullptr;
  if (q.front == nullptr) // checking is it first node
  {
      q.front = q.rear = temp;
  }
  else
  {
     q.rear ->next = temp;
     q.rear = temp;
  }
  
  
 



     
}





int main(){

    
    Queue q;
    Enqueue(q,20);



    
    return 0;
}