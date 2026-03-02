#include<iostream>
using namespace std;

#define MAX 10
int stack[MAX];
int top=0;

bool  isEmpty(){
    return top==0;
}

bool isFull(){
    return top==MAX;
}

bool push(int x){
    if(isFull()){
        cout<<"Stack is full"<<endl;
        return false;
    }
    stack[top]=x;
    top++;
    return true;
}

bool pop(int x){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return false;
    }
    x=stack[top-1];
    top--;
    return true;
}

int topElement(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return -1; // Return -1 to indicate stack is empty
    }
    return stack[top-1];
}

void showStack(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<"Stack elements : ";
    for(int i=top-1;i>=0;i--){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}

int main(){
    do
    {
        int option;
        cout<<"1. Push\n2. Pop\n3. Top Element\n4. Show Stack\n5. Is Empty\n6. Exit"<<endl;
        cout<<"Enter your option: ";
        cin>>option;
        switch(option){
            case 1: {
                int x;
                cout<<"Enter element to push: ";
                cin>>x;
                if(push(x)){
                    cout<<"Element pushed successfully"<<endl;
                }
                break;
            }
            case 2: {
                int poppedElement;
                if(pop(poppedElement)){
                    cout<<"Popped element: "<<poppedElement<<endl;
                }
                break;
            }
            case 3: {
                int topEl = topElement();
                if(topEl != -1)
                    cout<<"Top element: "<<topEl<<endl;
                break;
            }
            case 4:{
                showStack();    
                break;
            }
            case 5:{
                if(isEmpty()){
                    cout<<"Stack is empty"<<endl;
                }else
                    cout<<"Stack is not empty"<<endl;
                break;
            }
            case 6:
                cout<<"Exiting..."<<endl;
                return 0;
    
}
    } while (true);
    
    return 0;
}   