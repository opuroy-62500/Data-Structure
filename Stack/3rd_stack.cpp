// new stack implementation using linked list
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* top=NULL;

bool isEmpty(){
    return top==NULL;
}

void push(int x){
    Node* newNode=new Node();
    newNode->data=x;
    newNode->next=top;
    top=newNode;
}

bool pop(int &x){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return false;
    }
    Node* temp=top;
    x=top->data;
    top=top->next;
    delete temp;
    return true;
}

int topElement(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return -1; // Return -1 to indicate stack is empty
    }
    return top->data;
}

void showStack(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<"Stack elements : ";
    Node* temp=top;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    do
    {
        int option;
        cout<<"1. Push\n2. Pop\n3. Top Element\n4. Show Stack\n5. Is Empty\n6. Exit"<<endl;
        cin>>option;
        switch(option){
            case 1:{
                int x;
                cout<<"Enter element to push : ";
                cin>>x;
                push(x);
                break;
            }
            case 2:{
                int x;
                if(pop(x)){
                    cout<<"Popped element : "<<x<<endl;
                }
                break;
            }
            case 3:{
                int x=topElement();
                if(x!=-1){
                    cout<<"Top element : "<<x<<endl;
                }
                break;
            }
            case 4:{
                showStack();
                break;
            }
            case 5:{
                if(isEmpty()){
                    cout<<"Stack is empty"<<endl;
                }else{
                    cout<<"Stack is not empty"<<endl;
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


