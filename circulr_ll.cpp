/*#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
struct Node*head =NULL;
void additem(int newItem){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = head;
    //assign data
    newnode->data = newItem;
    //make it cc
    newnode->next = newnode;
    if(head != NULL){
        while(temp->next!=head)
         temp = temp->next;
         temp->next = newnode;
    }else
     newnode->next = newnode;
     head = newnode;
}

void display(){
    struct Node* temp;
    temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != head);
}

int main(){
    additem(5);
    additem(12);
    additem(94);
    additem(9);
    additem(6);
    additem(4);
    cout<<"linked list is : ";

    display();

    return 0;
}*/
#include <iostream>
using namespace std;
struct Node { 
   int data; 
   struct Node *next; 
}; 
struct Node* head = NULL; 
void insert(int newdata) { 
   struct Node *newnode = (struct Node *)malloc(sizeof(struct Node)); 
   struct Node *ptr = head;  
   newnode->data = newdata; 
   newnode->next = head; 
   if (head!= NULL) { 
      while (ptr->next != head) 
         ptr = ptr->next; 
         ptr->next = newnode; 
   } else
      newnode->next = newnode;   
      head = newnode; 
}  
void display() { 
   struct Node* ptr;
   ptr = head;
   do { 
      cout<<ptr->data <<" "; 
      ptr = ptr->next; 
   } while(ptr != head);
}   
int main() { 
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   display();
   return 0;
}   