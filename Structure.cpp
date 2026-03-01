#include<iostream>
#include<cstring>
using namespace std;


    struct shopping_item{
        string name;
        int total_amount_brought;
        double price;

    };
int main(){
    int n;
    cout<<"Enter number of items : ";
    cin>>n;
    shopping_item arr[n];

    for(int i=0;i<n;i++){
    cout<<"Enter name for "<<i+1<<"> :";
    cin.ignore();
    getline(cin,arr[i].name);
    cout<<"Enter total amount brought :";
    cin>>arr[i].total_amount_brought;
    cout<<"Enter price :";
    cin>>arr[i].price;
}
// pringting the details of the items
    cout<<"Details of the items : "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Name : "<<arr[i].name<<endl;
        cout<<"Total amount brought : "<<arr[i].total_amount_brought<<endl;
        cout<<"Price : "<<arr[i].price<<endl;
        cout<<endl;
    }
    
    int total_amount=0;
    for(int i=0;i<n;i++){
        total_amount+=arr[i].total_amount_brought*arr[i].price;
    }
    cout<<"Total amount of all items is : "<<total_amount<<endl;


int max_price_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].price > arr[max_price_index].price) {
            max_price_index = i;
        }
    }   
    cout << "Item with the highest price: " << arr[max_price_index].name << " (Price: " << arr[max_price_index].price << ")" << endl;
    
    return 0;
}