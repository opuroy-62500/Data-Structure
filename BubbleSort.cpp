#include<iostream>
#include<string>
using namespace std;

int main(){

string str="sunday";
int n = str.length();

// bubble sort algorithm
for(int i = 0; i<n-1 ;i++){
    for(int j = 0; j<n-i-1 ;j++){
        if(str[j] > str[j+1]){
            swap(str[j], str[j+1]);
        }
    }


}

cout<<"Sorted array: "<<endl;
for(int i = 0; i<n ;i++){
    cout<<str[i]<<" ";
}

return 0;
}
