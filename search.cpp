#include<iostream>
using namespace std;

int main(){

    int c[10]={1,2,3,4,5,6,7,8,9,10};
    int n;

    //searching for an element in the array
    cout<<"Enter the element to be searched: ";
    cin>>n;

    bool found1 = false;
    for(int i = 0 ;i<10 ;i++){
        if(c[i] == n){
            cout<<"Element found at index: "<<i<<endl;
            found1 = true;
            break;
        }
    }
    if(!found1){
        cout<<"Element not found in the array."<<endl;
    }

  
    return 0;
}