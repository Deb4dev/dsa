//get the basics
#include<iostream>
#include<stdlib.h>
using namespace std;
class Node{ //create the node to use
    public:
        int data;
        Node* next;
        Node(int val){//making a constructor
            data = val;
            next = NULL;
        }
};
//insertion 
void insertion(Node* &head,int val){
    Node* n = new Node(val);
    if( head == NULL){
        head = n;
        return;
    }
    n->data = val;
    n->next = head;
    head = n;
}
//deleting
void deletionatHead(Node* &head){//passing the head 
    Node* temp = head;
    if(head == NULL){//underflow check
        cout<<"nothing to delete"<<endl;
        return;
    }
    head = head->next;//moving the head to the next 
    delete temp;
}
void deletionatTail(Node * &head){
    Node *temp1 = head;
    Node *temp2 = NULL; // temp2* = head->next;
    while(temp1->next != NULL){
        temp2 = temp1;  //temp2 =temp2->next;
        temp1 = temp1->next;
    }
    delete temp1;//delete temp2;
    temp2->next =NULL;//temp1->next = NULL
    return;
}
void deletionatPos(Node* &head,int index){
    if(head == NULL)
        return;
    
    Node* temp = head;
    if(index == 1){
        head  = temp -> next;
        free(temp);
        return;
    }
    int i = 1;
    while(temp != NULL && i != index-1){
        temp = temp->next;
        i++;
    }
    if(temp == NULL || temp -> next ==NULL)
        return;
    Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
    
}
//display
void display(Node* head){
    
    while(head!=NULL){//traversing the list to the final point
        cout<<head->data<<"->";
        head= head->next;
    }
}
int main(){
    Node *head = NULL;
    insertion(head,34);
    insertion(head,54);
    insertion(head,21);
    insertion(head,59);
    insertion(head,32);
    //deletionatHead(head);
    //deletionatTail(head);
    deletionatPos(head,3);
    display(head);
}