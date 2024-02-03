#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertion_sort(vector<int>  arr){
    for(int i=0;i<arr.size();i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }

    print(arr);
}

int main(){
    vector<int> arr={14,9,15,12,6,8,13,-1};
    insertion_sort(arr);

}