#include<iostream>
using namespace std;
void back_track(int i,int n){
    if(i<1){
        return ;
    }
    else{
        back_track(i-1,n);
        cout<<i<<endl;
    }
}


int main(){
    back_track(10,10);
}