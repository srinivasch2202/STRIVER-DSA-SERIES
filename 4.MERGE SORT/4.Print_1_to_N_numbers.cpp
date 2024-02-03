#include<iostream>
using namespace std;
void n_numbers(int i,int n){
    if(i>n){
        return;
    }
    else{
        cout<<i<<endl;
        n_numbers(i+1,n);
    }

}


int main(){
    n_numbers(1,10);
}