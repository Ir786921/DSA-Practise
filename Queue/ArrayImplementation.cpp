#include<iostream>
using namespace std;
class Queue{
    public:
    int rear = -1;
    int front = -1;
    int* arr;
    int size;

    Queue(int size){
    this->size = size;
    arr = new int[size];
    int rear = -1;
    int front = -1;

    }


};

void Enqueue(Queue &q,int value){
   if (q.rear == q.size - 1)
   {
     cout << "Queue is Full";
   }
   else
   {
    q.rear++;
    q.arr[q.rear] = value;
   }
   
 
   
} 


void DeQueue(Queue &q){
    if(q.front == q.rear){
        cout << "Queue is empty";

    }
    
        q.front++;
        int value = q.arr[q.front];
    
        cout <<  "Value deleted is :" << value << endl; ;
   
  
}

void display(Queue &q){
    if (q.front == q.rear)
    {
        cout << "Queue is empty";
        
    }

    cout << "printing element in queue" << endl;

   for (int i = q.front + 1; i <= q.rear; i++)
   {   
       cout << q.arr[i] << " ";
   }
}

int main(){
   
    Queue p(5);
    Enqueue(p,10);
    Enqueue(p,25);
    Enqueue(p,75);
    DeQueue(p);

   
   
    display(p);
}


