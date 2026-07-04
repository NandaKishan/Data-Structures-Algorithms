#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count = 0;

    //top
    for(int i=1; i<=n; i++){
        //spaces1
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }
        //stars1
        cout<<"*";
        //spaces2
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        //spaces2
        for(int j=1; j<=(i-2); j++){
            if((i-2)>0){
                cout<<" ";
                count++;
            }
        }
        //stars2
        count++;
        if(count>1){
            cout<<"*";
        };
        cout<<endl;
    };

    //bottom
    for(int i=1; i<=(n-1); i++){
        //spaces1
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        //stars1
        cout<<"*";
        //spaces2
        for(int j=(n-1); j>=2; j--){
            cout<<"_";
        }
        // //stars2
        // cout<<"*";
        cout<<endl;
    };

    return 0;
}