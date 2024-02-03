#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse_an_array(vector<int> arr,int s,int e){
    if(s==e){
        print(arr);
        return ;
    }
    else{
        swap(arr[s],arr[e]);
        reverse_an_array(arr,s+1,e-1);
    }

}

int main(){
    vector<int> arr={1,2,3,4,5};
    reverse_an_array(arr,0,arr.size()-1);

}