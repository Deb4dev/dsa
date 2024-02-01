//declare the queue,front,rear,size
#include<iostream>
using namespace std;
int queue[100],front=-1,rear = -1,size;
//enqueue 
//check overflow->rear = size-1 ; 
//if not then move rear or increase it rear++ and assign value to queue at rear
void enqueue(){
    int val;
    if (rear == size -1){
        cout<<"queue overflow can't insert element"<<endl;
        return;
    }else{
        if (front == -1)
            front = 0;
        cout<<"enter the value:"<<endl;
        cin>>val;
        rear++;
        queue[rear]=val;
    }
}
//dequeue 
//check underflow condition using 
//underflow when(front==rear)else we move->
//to dequeue need to move the front++;
//get the value out of the queue using another variable a=-1,now to get the value we can write 
//a = queue[front]
//front++
void dequeue(){
    int data;
    if(front==rear){
        cout<<"underflow";
        return;
    }else{
        cout<<"data is:"<<queue[front]<<endl;
        front++;
    }

}
//to display, run a for loop starting from front to rear 
void display(){
    if(front==rear)
        cout<<"underflow";
    else{    
        for(int i=front;i<=rear;i++){
        cout<<queue[i]<<" "<<endl;
        }
    }

} 
//let's run the main
int main(){
    int choice;
    cout<<"enter the size: ";
    cin>>size;
    cout<<"====\n"
        <<"MENU\n"
        <<"====\n"
        <<"1.Enqueue\n"
        <<"2.Dequeue\n"
        <<"3.Display\n"
        <<"4.EXIT\n";
    do{
        cout<<"enter the choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                cout<<"exiting the program...."<<endl;
                break;
            default:
                cout<<"invalid choice!"<<endl;
        }
    }while(choice != 4);
    return 0;
}