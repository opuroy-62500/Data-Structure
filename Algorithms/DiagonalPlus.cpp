//2D array diagonal plus

#include<iostream>
using namespace std;
int main(){
int m, n;
do
{
    cout << "Enter the rows and columns of the array: " << endl;
    cin >> m >> n;

    if(m != n)
    {
        cout << "Rows and columns must be equal. Try again.\n";
    }

} while(m != n);

int a[m][n];

for(int i=0;i<m ;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}


int sum1=0, sum2=0;
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        if(i==j){
            sum1+=a[i][j];
        }
    }
}
for(int i=0; i<m; i++){
    for(int j= n-1; j>=0; j--){
        if(i+j==m-1){
            sum2+=a[i][j];
        }
    }
}
cout<<"Sum of diagonal 1 is: "<<sum1<<endl;
cout<<"Sum of diagonal 2 is: "<<sum2<<endl;
cout<<"Sum of both diagonals is: "<<sum1+sum2<<endl;



}
