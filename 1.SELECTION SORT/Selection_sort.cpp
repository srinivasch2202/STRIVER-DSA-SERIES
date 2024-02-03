#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selection_sort(vector<int> arr){
    for(int i=0;i<arr.size()-1;i++){
        int min=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);

    }
    print(arr);
}
int main(){
    vector<int> arr{13,46,24,52,20,9,-1};
    selection_sort(arr);    
}