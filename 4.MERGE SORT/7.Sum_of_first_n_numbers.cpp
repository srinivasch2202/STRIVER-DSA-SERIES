#include<iostream>
using namespace std;

void sum_of_n_numbers(int sum,int n){
    // int sum=0;
    if(n<1){
        cout<<sum;
        return ;
    }
    else{
        sum=sum+n;
        sum_of_n_numbers(sum,n-1);
    }

}

int main(){
    sum_of_n_numbers(0,5);
}