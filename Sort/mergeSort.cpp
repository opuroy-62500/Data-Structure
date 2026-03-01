#include<iostream>
using namespace std;

int main(){
cout<<"Enter the size of the array: ";
int n;
cin>>n;
int arr[n];
cout<<"Enter the elements of the array: ";
for(int i = 0; i<n ;i++){
    cin>>arr[i];
}
  // merge sort algorithm
  for(int i = 1; i<n ;i++){
    int key = arr[i];
    int j = i-1;
    while(j>=0 && arr[j]>key){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key; 

}

cout<<"Sorted array: "<<endl;
for(int i = 0; i<n ;i++){   
    cout<<arr[i]<<" ";  
}
return 0;
}