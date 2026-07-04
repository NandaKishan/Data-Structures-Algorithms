#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool isPrime = true;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            isPrime = false;
        };
    };

    if(isPrime){
        cout<<"Prime Number"<<endl;
    }else{
        cout<<"Composite Number"<<endl;
    };

    return 0;
}