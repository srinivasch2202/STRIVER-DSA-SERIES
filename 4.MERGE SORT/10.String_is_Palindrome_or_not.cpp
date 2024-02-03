#include<iostream>
using namespace std;
void palindrome(string str,int s,int e){
    if(s==e){
        cout<<"palidrome"<<endl;
        return ;
    }
    else{
        if(str[s]==str[e]){
            palindrome(str,s+1,e-1);
        }
        else{
            cout<<"not a palindrome";
            return ;
        }
    }
}

int main(){
    string str="madaw";
    palindrome(str,0,str.length()-1);

}