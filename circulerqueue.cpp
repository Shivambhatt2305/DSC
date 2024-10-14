#include<iostream>
using namespace std;

//double ended queue(dequeue)

class node{
    public:
    int data;
    Node* next;

    node(int val){
        data=val;
        next=nullptr;
    }
}

class deque{
    Node* front;
    Node* rear;
    deque(){
        front=rear=nullptr;
    }
}

bool isempty(){
    return front==nullptr;
}

void inser_at_front(int val){
    Node *temp=new Node(int val);
    if(isempty()){
        front=rear=temp;
    }else{
         temp->next=front;
         front=temp;
    }
   cout<<"Enqueued the element in front : "<<val<<endl;
}

void inser_at_back(int val){
    Node *temp=new Node(int val);
    if(isempty()){
        front=rear=temp;
    }else{
         rear->next=temp;
         rear=temp;
    }
   cout<<"Enqueued the element in rear : "<<val<<endl;
}

void delete_at_front(int val){
    Node *temp=new Node(int val);
    if(isempty()){
        cout<<"Deque is empty"<<endl;
    }
    
    Node *temp=front;
    cout<<"dequed the element from front : "<<front->data<<endl;
    if(front==nullptr){
        rear=nullptr;
    }
    delete temp;
}

void delete_at_rear(){
    Node *temp=new Node(int val);
    if(isempty()){
        cout<<"Deque is empty"<<endl;
        return ;
    }
    if(front==rear){
        cout<<"deleting rear node with value : "<<rear->data<<endl;
        delete rear;
        front=rear=nullptr;
    }
    else{
    Node *temp=front;
    while(temp->next!=rear){
        temp=temp->next;
    }
    cout<<"deleting rear node with value : "<<rear->data<<endl;
    delete rear;
    rear=temp;
    temp->next=nullptr;
    }

};

void getfront(){
    if(isempty()){
        cout<<"Deque is empty"<<endl;
        return;
    }
    cout<<" The rear  element is : "<<front->data<<endl;

}

void getrear(){
    if(isempty()){
        cout<<"Deque is empty"<<endl;
        return;
    }
    cout<<" The rear  element is : "<<rear->data<<endl;

}

int main(){
    deque dq;
    dq.insert_at_front(5);
    dq.insert_at_back(10);
    dq.insert_at_back(15);
    dq.insert_at_front(20);//20 5 10 15
    dq.getfront();
    dq.getrear();
    dq.delete_at_front();
    dq.delete_at_rear();
    dq.getfront();
    dq.getrear();
    dq.delete_at_front();
    dq.delete_at_rear();
    dq.getfront();
    dq.getrear();
    return 0;
}