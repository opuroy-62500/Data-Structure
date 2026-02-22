#include<iostream>
#include<string>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found at index mid
        }
        else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        }
        else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int binarySearch(const char* str, int size, char target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (str[mid] == target) {
            return mid; // Target found at index mid
        }
        else if (str[mid] < target) {
            left = mid + 1; // Search in the right half
        }
        else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

// sort a array in acsending order array

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    // Sort the array before performing binary search
    sortArray(arr, n);  

    cout << "Enter the target element to search: ";
    cin >> target;

    int result = binarySearch(arr, n, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

     string str ;
    cin.ignore(); // Ignore the newline character left in the buffer
    getline(cin, str);

    // sort the string in acsending order
    for(int i = 0; i<str.length() - 1 ;i++){
        for(int j = 0; j<str.length() - i - 1 ;j++){
            if(str[j] > str[j+1]){
                swap(str[j], str[j+1]);
            }
        }
    }

    // perform binary search on the sorted string
    cout << "Enter the target character to search in the string: "; 
    char targetChar;
    cin >> targetChar;
    int charIndex = binarySearch(str.c_str(), str.length(), targetChar);
    if (charIndex != -1) {
        cout << "Character found at index: " << charIndex << endl;
    } else {
        cout << "Character not found in the string." << endl;
    }   

    return 0;
}