#include <iostream>
using namespace std;
// create the class
// define the size
#define MAX_size 10
class queue
{
    int front, rear, item;
    int arr_q[MAX_size];

public:
    queue()
    {
        front = rear = -1;
    }
    // put the methods in
    void enqueue();
    void dequeue();
    int isFull();
    int isEmpty();
    void display();
};
int queue::isEmpty()
{
    if (front == rear)
    {
        return 0;
    }
    return 1;
}
int queue::isFull()
{
    if (rear == MAX_size - 1)
    {
        return 0;
    }
    return 1;
}
// enqueuing check underflow which means isEmpty for ! we need to add val to the queue and rear++
void queue::enqueue()
{
    if (isFull() == 0)
    {
        cout << "overflow so we cant add " << endl;
    }
    else
    {
        cout << "enter the value: ";
        cin >> item;
        arr_q[rear] = item;
        rear++;
    }
}
// to dequeue check underflow then go for the front index++ and get that value out
void queue::dequeue()
{
    int data;
    if (isEmpty() == 0)
    {
        cout << "underflow situation :";
    }
    else
    {
        cout << "deleting the element..." << endl;
        data = arr_q[front];
        cout << "the deleted element is : " << data << endl;
        front++;
    }
}
// to display traverse through it using for loop from front  to rear
void queue::display()
{
    if (isEmpty() == 0)
        cout << "underflow no item to show";
    else
    {
        for (int i = front; i <= rear-1; i++)
        {
            cout << "[" << arr_q[i] << "] ";
        }
    }
}
int main()
{
    queue q;
    int choice, data;
    cout << "\nmenu";
    cout << "\n1. enquue";
    cout << "\n2. dequeue";
    cout << "\n3.display";
    cout << "\n4.EXIT";
    do
    {
        cout << "\nenter the choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            q.enqueue();
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout << "exiting...";
            break;
        default:
            cout << "invalid choice..";
        }
    } while (choice != 4);
    return 0;
}