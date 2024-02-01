//directory
#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data  = val;
            next  = NULL;
        }
};
void insertAtstart(Node*&head,int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}
void insertItem(Node*&head,int val){
    Node*n = new Node(val);
    Node*temp = head;
    n->data = val;
    if(head == NULL){
        n->next = n;
        return;
    }
    else{
        while(temp->next!= head){
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
    }
}
void InsertAtPos(Node*&head,int val,int pos){
    Node*n = new Node(val);
    Node*temp = head;
    n->data = val;
    int i = 0;
    while(i != pos -1){
        temp = temp->next;
        i++;
    }
    n->next = temp->next;
    temp->next = n;
}
int main(){
    Node head;
    insertItem(head,2);
    return 0;
}