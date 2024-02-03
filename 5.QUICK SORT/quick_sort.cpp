#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> arr, int low, int high) {
    int pivot = arr[high]; 
    int i = low - 1; 

    for (int j = low; j <= high - 1; j++) {
        
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}


void quick_sort(vector<int> arr, int low, int high) {
    if (low < high) {
        int pivot_index = partition(arr, low, high);
        quick_sort(arr, low, pivot_index - 1);
        quick_sort(arr, pivot_index + 1, high);
    }
}


void print(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    int n = arr.size();
    quick_sort(arr, 0, n - 1);
    cout << "Sorted array: ";
    print(arr);
    return 0;
}
