#include <iostream>
using namespace std;

void CountSort(int arr[], int n)
{
    // Find maximum element
    int maxVal = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }

    // Create count array
    int count[maxVal + 1] = {0};

    // Store frequency of each element
    for(int i = 0; i < n; i++)
        count[arr[i]]++;

    // Reconstruct sorted array
    int index = 0;

    for(int i = 0; i <= maxVal; i++)
    {
        while(count[i] > 0)
        {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    CountSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
