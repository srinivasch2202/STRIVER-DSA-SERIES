#include<iostream>
 using namespace std;

 void print(){
    cout<<"recursive"<<endl;
    print();
 }

 int main(){
    print();
 }