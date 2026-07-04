#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=65; j<(65 + n); j++){
            cout<<(char)j<<" ";
        };
        cout<<endl;
    };

    return 0;
}