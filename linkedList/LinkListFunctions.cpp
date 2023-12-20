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

class LinkList{  // user defined Data Structure
public:
    Node* head;
    Node* tail;
    int size;

    LinkList(){
        tail=head=NULL;
        size=0;
    }
//Insert Functions
    void insertAtBeginning(int val){
        Node* temp=new Node(val);
        if(size==0)head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertaAtEnd(int val){
        Node* temp= new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;

    }
    void insertAtIdx(int idx, int val){
        if(idx==0) insertAtBeginning(val);
        else if(idx==size) insertaAtEnd(val);
        else if(idx<0 || idx>size) cout<<"Invalid INDEX"<<endl;
        else{
            Node* t=new Node(val);
        Node* temp=head;
        for(int i=0; i<idx-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        size++;
        } 
       
    }
//Get Function
    int getAtIdx(int idx){
        if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else if(idx<0 || idx>size) {
            cout<<"Invalid INDEX"<<endl; 
            return -1;
        }else {
            Node* temp=head;
            for(int i=0; i<idx; i++){
                temp=temp->next;
            }
            return temp->val;

        }
    }
//Delete Functions
void deleteAtHead(){
    if(size==0) cout<<"Invalid List."<<endl;
    else {
        head=head->next;
        size--;
    }
}
void deleteAtTail(){
    if(size==0) {
        cout<<"Invalid List."<<endl;
        return;
    }
    else{
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
}
void deleteAtIdx(int idx){
    if(idx==0) deleteAtHead();
    else if(idx==size) deleteAtTail();
    else if(idx<0 || idx>size || size==0){
        cout<<"Invalid input/list"<<endl;
        return;
    }else {
        Node* temp=head;
        for(int i=0; i<idx-1;i++){
            temp=temp->next;
        }
        temp->next=(temp->next)->next;
        size--;

    }

}
void DeleteAllNodes(int value){
    Node* temp=head;
    while(head->val==value){
        head=head->next;
        temp=temp->next;
        size--;
    } 
    while(temp!=NULL){
        if(temp->next->val==value){
            temp->next=temp->next->next;
            size--;
        }
        temp=temp->next;
        
    }
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
    LinkList *ll= new LinkList();
    ll->insertaAtEnd(10);
    ll->display();
    ll->insertaAtEnd(20);
    ll->display();
    ll->insertaAtEnd(30);
    ll->display();
    ll->insertaAtEnd(40);
    ll->display();
    ll->insertaAtEnd(50);
    ll->display();
    ll->insertAtBeginning(40);
    ll->display();
    ll->insertAtIdx(3,40);
    ll->display();
    // ll->insertAtIdx(0,100);
    // ll->display();
    // ll->insertAtIdx(8,60);
    // ll->display();
    // ll->deleteAtHead();
    // ll->display();
    // ll->deleteAtTail();
    // ll->display();
    // ll->deleteAtIdx(ll->size);
    // ll->display();
    ll->DeleteAllNodes(40);
    ll->display();



 return 0;
}