#include<iostream>
using namespace std;

int main(){

    //insertion acsending sort
    int n=5, c[10]={2,3,5,6,7}, key, j;
    for(int i = 1; i<n ;i++){
        key = c[i];
        j = i-1;
        while(j>=0 && c[j]>key){
            c[j+1] = c[j];
            j--;
        }
        c[j+1] = key;
    }

    //printing the array
    cout<<"The sorted array is: ";
    for(int i = 0; i<n ;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

    //insertion descending sort
    int m=5;
    int c2[10]={2,3,5,6,7};
    for(int i = 1; i<m ;i++){
        key = c2[i];
        j = i-1;
        while(j>=0 && c2[j]<key){
            c2[j+1] = c2[j];
            j--;
        }
        c2[j+1] = key;
    }

    //printing the descending sorted array
    cout<<"The descending sorted array is: ";
    for(int i = 0; i<n ;i++){
        cout<<c2[i]<<" ";
    }
    cout<<endl;

    return 0;

}