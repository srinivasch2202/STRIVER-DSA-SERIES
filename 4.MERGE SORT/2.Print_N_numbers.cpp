#include<iostream>
using namespace std;
void print_n_numbers(int n){
    if(n==0){
        return;
    }
    else{
        cout<<n<<" ";
        print_n_numbers(n-1);
    }
}

int main(){
    print_n_numbers(10);
}