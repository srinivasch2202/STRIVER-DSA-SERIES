#include<iostream> 
using namespace std;

void print_n_to_1(int n){
    if(n<1){
        return;
    }
    else{
        cout<<n<<endl;
        print_n_to_1(n-1);
    }
}

int main(){
    print_n_to_1(100);

}