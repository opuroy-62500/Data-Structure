#include<iostream>
using namespace std;

int main(){

    int n=8, c[10]={1,2,3,5,6,7,8};

    //deleting element from the end of the array
    n--;

    //deleting element from the beginning of the array
    for(int i = 0 ;i<n-1 ;i++){
        c[i] = c[i+1];
    }
    n--;

    //deleting element from the middle of the array
    for(int i = 3 ;i<n-1 ;i++){
        c[i] = c[i+1];
    }
    n--;

    //printing the array

    for(int i = 0; i<n ;i++){
        cout<<c[i]<<" ";
    }   

    return 0;
}