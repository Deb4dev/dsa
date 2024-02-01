#include<iostream>
using namespace std;
class Node{
   public:
        int data;
        struct Node *next;
        Node(int val){
            data = val;
            next = NULL;
        }
};
void insertatHead(Node* &head,int val){
    Node* n = new Node(val);

    if(head == NULL){
        n->next = n;
        return;
    }
    Node * temp = head;
    do{
        temp = temp->next;
    }while(temp->next != head );
    temp->next = n;
    n->next = head;
    head = n;
    return;
}
void insertatTail(Node* &head,int val){


    Node* n = new Node(val);
    
    Node* temp = head;
    if(head ==  NULL){
        insertatHead(val);
    }

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    return;
}

void display(Node* head){
    Node*temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main(){
    Node* head =NULL;
    insertatTail(head,23);
    display(head);
    return 0;
}