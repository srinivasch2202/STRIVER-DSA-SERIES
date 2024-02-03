#include<iostream>
#include<vector>
using namespace std;


void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void optimal_bubble_sort(vector<int> arr){
    //just checking if array is ascending or not if it we will break
    int didswap=0;
    for(int i=arr.size()-1;i>=1;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                didswap=1;
            }

        }
        if(didswap==0){
            break;
        }
    }
    print(arr);
}

void bubble_sort(vector<int> arr){
    //O(n^2) time complexity
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
    optimal_bubble_sort(vec);

}