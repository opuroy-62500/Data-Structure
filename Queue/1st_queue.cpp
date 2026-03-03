//  queue implementation using array
#include<iostream>
using namespace std;

#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

bool isFull(){
    return rear == MAX - 1;
}

bool isEmpty(){
    return front == -1 || front > rear;
}

void enqueue(int x){
    if(isFull()){
        cout<<"Queue is full"<<endl;
        return;
    }
    if(isEmpty()){
        front = 0;
    }
    rear++;
    queue[rear] = x;
}

bool dequeue(int x){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return false;
    }
    x = queue[front];
    front++;
    return true;
}

int frontElement(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    return queue[front];
}

void showQueue(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return;
    }
    cout<<"Queue elements : ";
    for(int i=front; i<=rear; i++){
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}

int main(){
    do
    {
        int option;
        cout<<"1. Enqueue\n2. Dequeue\n3. Front Element\n4. Show Queue\n5. Is Empty\n6. Exit"<<endl;
        cin>>option;
        switch(option){
            case 1:{
                int x;
                cout<<"Enter element to enqueue : ";
                cin>>x;
                enqueue(x);
                break;
            }
            case 2:{
                int x;
                if(dequeue(x)){
                    cout<<"Dequeued element : "<<x<<endl;
                }
                break;
            }
            case 3:{
                int x=frontElement();
                if(x!=-1){
                    cout<<"Front element : "<<x<<endl;
                }
                break;
            }
            case 4:{
                showQueue();
                break;
            }
            case 5:{
                if(isEmpty()){
                    cout<<"Queue is empty"<<endl;
                }else{
                    cout<<"Queue is not empty"<<endl;
                }
                break;
            }
            case 6:{
                cout<<"Exiting..."<<endl;
                return 0;
            }
            default:{
                cout<<"Invalid option"<<endl;
            }
        }
    } while (true);
    
    return 0;
}
