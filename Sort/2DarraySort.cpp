#include<iostream>
using namespace std;

int main(){

   int n,m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<m ;j++){
            cin>>arr[i][j];
        }
    }

    //sorting acsending the array
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<m-1 ;j++){
            for(int k = 0; k<m-j-1 ;k++){
                if(arr[i][k]>arr[i][k+1]){
                    swap(arr[i][k], arr[i][k+1]);
                }
            }
        }
    }

    //printing the sorted array
    cout<<"The sorted array is: "<<endl;
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<m ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //sorting descending the array
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<m-1 ;j++){
            for(int k = 0; k<m-j-1 ;k++){
                if(arr[i][k]<arr[i][k+1]){
                    swap(arr[i][k], arr[i][k+1]);
                }
            }
        }
    }
    //printing the descending sorted array
    cout<<"The descending sorted array is: "<<endl;
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<m ;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}