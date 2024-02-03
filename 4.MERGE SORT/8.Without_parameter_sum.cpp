#include<iostream>
 using namespace std;
 int sum_function(int n){
    if(n==0){
        return 0;
    }
    else{
        int sum=n+sum_function(n-1);
        return sum;
    }
 }

 int main(){
    int res=sum_function(3);
    cout<<res ;

 }