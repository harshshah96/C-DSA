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

//Linked List
    class Linklist{
        public:

            Node* head;
            Node* tail;
            int size=0;

    };
//Display Linked List
    void display(Node* head){
            while (head!=NULL){
                cout<<head->val<<" ";
                head=head->next;
            }
            cout<<endl;

    }

// Linked List size
    int size(Node *head){
            int count=0;
            while (head!=NULL){
                count++;
                head=head->next;
            }
            return count;

    }

// Display through recursion
    void Displayrec(Node* head){
            if(head==NULL) return;
            cout<<head->val<<" ";
            head= head->next;
            Displayrec(head);

    }


int main()
{
    Node* a= new Node (10);
    Node* b= new Node (20);
    Node* c= new Node (30);
    Node* d= new Node (40);
    Node* e= new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    // (a.next)->val=70
    // //cout<<b.val;
    // cout<<((a.next)->next)->va

    Displayrec(a);
    cout<<endl;
    cout<<size(a);





}
