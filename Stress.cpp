#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

//Maximum Pairwise Product 
long long MaxpairwiseProduct(const vector<int>& numbers){
    long long result = 0;
    int n = numbers.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((long long)numbers[i] * numbers[j] > result){
                result = (long long)numbers[i] * numbers[j];
            }
        }
    }
    return result;
}
long long MaxpairwiseProductfast(const vector<int>& numbers){
    int n = numbers.size();

int max_index1 = -1;
    for(int i=0; i<n; i++){
        if(max_index1 == -1 || numbers[i] > numbers[max_index1]){
            max_index1 = i;
        }
    }

    int max_index2 = -1;
    for(int j=0; j<n; j++){
        if(j != max_index1 && (max_index2 == -1 || numbers[j] > numbers[max_index2])){
            max_index2 = j;
        }
    }

    return ((long long)numbers[max_index1]) * numbers[max_index2];

}

int main(){
    // stress testing
  srand(time(0));
    while(true){
        int n = rand() % 1000 + 2;
        cout << n << "\n";
        vector<int> a(n);
        for(int i=0; i<n; i++){
            a[i] = rand() % 1000;
            cout << a[i] << " ";
        }
        cout << "\n";
        long long res1 = MaxpairwiseProductfast(a);
        long long res2 = MaxpairwiseProduct(a);
        if(res1 != res2){
            cout << "Wrong answer: " << res1 << " " << res2 << "\n";
            break;
        }
        else{
            cout << "OK\n";
        }
    }

    int n;
    cin >> n;
    vector<int> numbers(n);
    for(int i=0; i<n; i++){
        cin >> numbers[i];
    }
    cout << MaxpairwiseProductfast(numbers) << "\n";
    return 0;
}