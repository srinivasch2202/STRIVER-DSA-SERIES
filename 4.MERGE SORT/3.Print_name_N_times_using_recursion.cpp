#include<iostream>
using namespace std;

void printing_name(int i,int n){
    if(i>n){
        return ;
    }
    else{
        cout<<"srinivas"<<endl;
        printing_name(i+1,n);
    }
}


int main(){
    printing_name(1,5);
}