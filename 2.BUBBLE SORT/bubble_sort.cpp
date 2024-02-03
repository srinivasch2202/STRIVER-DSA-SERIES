#include<iostream>
#include<vector>
using namespace std;


void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubble_sort(vector<int> arr){
    for(int i=arr.size()-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr);
}

int main(){
    vector<int> vec={13,46,24,52,20,9,-1};
    bubble_sort(vec);

}