#include<iostream>
#include<vector>
using namespace std;

void print(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(vector<int>& arr, int s, int mid, int e) {
    vector<int> temp;
    int left = s;
    int right = mid + 1;
    while (left <= mid && right <= e) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= e) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = 0; i < temp.size(); i++) {
        arr[s + i] = temp[i];
    }
}

void merge_sort(vector<int>& arr, int s, int e) {
    if (s < e) {
        int mid = (s + e) / 2;
        merge_sort(arr, s, mid);
        merge_sort(arr, mid + 1, e);
        merge(arr, s, mid, e);
    }
}

int main() {
    vector<int> arr = {3, 1, 2, 4, 1, 5, 2, 6, 4};
    merge_sort(arr, 0, arr.size() - 1);
    print(arr);
    return 0;
}
