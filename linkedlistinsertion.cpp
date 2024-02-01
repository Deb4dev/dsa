#include<iostream>
using namespace std;
//#include<stdlib.h>//as we are going to use malloc
class Node{//need to create a class for the node
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }
};

void insertionatTail(Node* &head,int val){
    Node* n = new Node(val);
    if(head == NULL){// if the list is empty it will work 
        head = n;
        return;
    }
    Node* temp = head;//as we traverse need to keep head secure
    while(temp->next != NULL){///traverse through the whole list to get last to insert 
        temp = temp->next; // for this the temp node we created traverses all through the list
    }
    temp->next=n;
}

void insertionatBegin(Node* &head,int val){
    Node* n = new Node(val);

    if(head==NULL){
        head = n;
        return;
    }
    n->data=val;//got the data in list
    n->next = head;//getting on the old link and pointing the part which head pointed
    head = n;//head will be pointing the new node from now;

    //cout<<"inserted item: "<<n->data<<endl;

}

void insertatPos(Node* &head,int val,int index){
    Node* n = new Node(val);//create a new node
    int i = 0;
    Node* temp = head;//storing the head to make it secure
    while(i != index-1){//running a loop to reach thhe position we need    
        temp = temp->next;//shifting that pointer to the next node
        i++;//increasing the index
    }
    n->data = val;//replacing value to use the latest val of the node
    n->next = temp->next;//pointing the new node to the next node of designated
    temp->next=n;//giving the new node's positon
    return;
}

void insertatEnd(Node* &head,int val){
    Node* n =new Node(val);
    Node* temp = head;
    n->data = val;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->next = NULL;
    return;
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp= temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    insertionatBegin(head,54);
    insertionatBegin(head,32);
    insertatPos(head,12,2);
    insertatEnd(head,43);
    display(head);
    return 0;
}