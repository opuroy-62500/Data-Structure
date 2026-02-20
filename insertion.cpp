#include<iostream>
using namespace std;

int main(){

    int a, b, n=5, c[10]={2,3,5,6,7};

    //adding element at the end of the array
    a =8;
    c[n++] = a;
    
    //adding element at the beginning of the array
    b = 1;
    for(int i = n ;i>0 ;i--){
        c[i] = c[i-1];
    }
    c[0] = b;
    n++;    

    //adding element at the middle of the array
    a = 4;  
    for(int i = n ;i>3 ;i--){
        c[i] = c[i-1];
    }
    c[3] = a;
    n++;

    //printing the array

    for(int i = 0; i<n ;i++){
        cout<<c[i]<<" ";
    }   

    return 0;
}