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
// quick sort algorithm
for(int i = 0; i<n-1 ;i++){
    int k = i;
    for(int j = i+1; j<n ;j++){
        if(arr[j]<arr[k]){
            k = j;
        }
    }
    // swap the minimum element with the first element of the unsorted part
    swap(arr[i], arr[k]);

}
cout<<"Sorted array: "<<endl;
for(int i = 0; i<n ;i++){
    cout<<arr[i]<<" ";
}

return 0;
}