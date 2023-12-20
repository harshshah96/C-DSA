#include<bits/stdc++.h>
using namespace std;

class Node{
        public:

        //Variables
            int val;
            Node* next;

        // Constructor
            Node(int val){
                this->val=val;
                this->next = NULL;
                }
    };

class Queue{  // user defined Data Structure
public:
    Node* head;
    Node* tail;
    int size;

    Queue(){
        tail=head=NULL;
        size=0;
    }
//Insert Functions

    void push(int val){
        Node* temp= new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    
//Delete Function
void pop(){
    if(size==0) {
        cout<<"Invalid Queue."<<endl;
        return;
    }
    else {
        head=head->next;
        size--;
    }
}
// get functions
 int front(){
    if(size==0) {
        cout<<"Invalid Queue."<<endl;
        return -1;
    }
    return head->val;
    
 }
 int back(){
    if(size==0) {
        cout<<"Invalid Queue."<<endl;
        return -1;
    }
    else return tail->val;
 }
//Display function
    void display(){
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
    q.display();
    q.pop();
    q.display();

 return 0;
}