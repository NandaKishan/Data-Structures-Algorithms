/*
Pyramid Pattern
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        //spaces
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }
        //numbers1
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //numbers2
        for(int j=i; j>1; j--){
            if(j-1 != 0){
                cout<<j-1;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    };

    return 0;
}