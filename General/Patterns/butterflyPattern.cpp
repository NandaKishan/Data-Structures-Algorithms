#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    //top
    for(int i=1; i<=n; i++){
        //stars1
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        //spaces1
        for(int j=(n-i); j>0; j--){
            cout<<" ";
        }
        //spaces2
        for(int j=(n-i); j>0; j--){
            cout<<" ";
        }
        //stars2
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    };

    //bottom
    for(int i=0; i<n; i++){
        //stars1
        for(int j=(n-i); j>0; j--){
            cout<<"*";
        }
        //spaces1
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //spaces2
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //stars2
        for(int j=(n-i); j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    };

    return 0;
}