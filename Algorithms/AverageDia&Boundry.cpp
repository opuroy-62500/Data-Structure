#include<iostream>
using namespace std;

int main(){

    int n, m;
    cout<<"Enter the number of rows and columns: ";
    cin>>n>>m;

    int arr[n][m];
    cout<<"Enter the elements of the array: "<<endl;

    for(int i = 0; i<n ;i++){
        for(int j = 0; j<m ;j++){
            cin>>arr[i][j];
        }
    }
    // calculating the average of the diagonal elements

    int sum = 0;
    int count = 0;
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<m ;j++){
            if(i == j){
                sum += arr[i][j];
                count++;
            }
        }
    }
    if(count > 0){
        double average = (double)sum / count;
        cout<<"Average of diagonal elements: "<<average<<endl;
    }
    else{
        cout<<"No diagonal elements found."<<endl;
    }
    // calculating the average of the boundary elements
    cout<<"Boundary elements: "<<endl;  
    int boundarySum = 0;
    int boundaryCount = 0;
    for(int i = 0; i<n ;i++){
        for(int j = 0; j<m ;j++){
            if(i == 0 || i == n-1 || j == 0 || j == m-1){
                cout<<arr[i][j]<<" ";
                boundarySum += arr[i][j];
                boundaryCount++;
            }
        }
        cout<<endl;

    }
    if(boundaryCount > 0){
        double average = (double)boundarySum / boundaryCount;
        cout<<"Average of boundary elements: "<<average<<endl;
    }
    else{
        cout<<"No boundary elements found."<<endl;
    }

    // calculating the average of the diagonal and boundary elements
    int totalSum = sum + boundarySum;
    int totalCount = count + boundaryCount;
    if(totalCount > 0){
        double totalAverage = (double)totalSum / totalCount;
        cout<<"Average of diagonal and boundary elements: "<<totalAverage<<endl;
    }
    else{
        cout<<"No diagonal or boundary elements found."<<endl;
    }

    return 0;

} 