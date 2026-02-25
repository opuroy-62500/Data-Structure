#include<iostream>
using namespace std;

int main()
{
int a[4][4]={{1,2,3,4},
             {5,6,7,8},
             {9,10,11,12},
             {13,14,15,16}};

int b=3;
int c =0 ,sum=0;
for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
        if(a[i][j]==0)
        {
            sum+=a[i][j];
            c++;
        }
        else if(j==3){
            sum+=a[i][j];
            c++;
        }
        else if(a[i][j]==b)
        {
            sum+=a[i][j];
            c++;
            b--;
        }
    }
}

    int avg=sum/c;
    cout<<"Average is: "<<avg<<endl;

return 0;

}