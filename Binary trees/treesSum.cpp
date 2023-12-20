#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* right;
    Node* left;

    Node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};
void preorder(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==NULL) return;
    preorder(root->left);
    cout<<root->val<<" ";
    preorder(root->right);
}
void postorder(Node* root){
    if(root==NULL) return;
    preorder(root->left);
    preorder(root->right);
    cout<<root->val<<" ";
}
int sumtree(Node* root){
    if(root==NULL) return 0;
    return root->val + sumtree(root->right)+ sumtree(root->left);;
}
int size(Node* root){
    if(root==NULL) return 0;
    return 1 + size(root->right)+ size(root->left);;
}
int maximum(Node* root){
    if(root==NULL) return INT_MIN;
    return max(root->val , max(maximum(root->right), maximum(root->left)));
}
int minimum(Node* root){
    if(root==NULL) return INT_MAX;
    return min(root->val , min(minimum(root->right), minimum(root->left)));
}
int product(Node* root){
    if(root==NULL) return 1;
    return (root->val * product(root->right) * product(root->left));
}
int level(Node* root){
    if(root==NULL) return 0;
    return (1 + max(level(root->right), level(root->left)));
}
void nthLevel(Node* root, int curr, int level){
    if(root==NULL) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nthLevel(root->left,curr+1,level) ;
    nthLevel(root->right,curr+1,level) ;
}
void levelOrder(Node* root){
    for(int i=1; i<=level(root); i++){
        nthLevel(root,1,i);
    }
}
void levelOrderQueue(Node* root){  // BFS -> VIMP
    queue <Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL)  q.push(temp->left);
        if(temp->right!=NULL)  q.push(temp->right);

    }
    cout<<endl;
}

int main()
{
//Initializations
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
//connections
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    
    // display(a);
    // cout<<endl;
    // cout<<sumtree(a);
    // cout<<endl;
    // cout<<size(a);
    // cout<<endl;
    // cout<<maximum(a);
    // cout<<endl;
    // cout<<minimum(a);
    // cout<<endl;
    // cout<<product(a);
    // cout<<endl;
    // cout<<level(a);
    // nthLevel(a,1,2);
    // cout<<endl;

    levelOrderQueue(a);

 return 0;
}