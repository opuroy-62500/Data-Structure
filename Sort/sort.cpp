#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int a[n];
    //taking input of the array
    cout<<"Enter the elements of the array: ";
    for(int i = 0 ;i<n ;i++){
        cin>>a[i];
    }

    //sorting the array in ascending order
    for(int i = 0 ;i<n-1 ;i++){
        for(int j = 0 ;j<n-i-1 ;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

    //printing the sorted array
    cout<<"The sorted array is: ";
    for(int i = 0 ;i<n ;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //sorting the array in descending order
    for(int i = 0 ;i<n-1 ;i++){
        for(int j = 0 ;j<n-i-1 ;j++){
            if(a[j]<a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }   

    //printing the sorted array
    cout<<"The sorted array in descending order is: ";
    for(int i = 0 ;i<n ;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
    
}