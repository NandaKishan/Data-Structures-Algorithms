/*Inverted Triangle Pattern
1 1 1 1 
  2 2 2
    3 3
      4
*/

/*
spacing caused this beauty (cout<<i<<" ")
1 1 1 1 
 2 2 2 
  3 3 
   4 
*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        //numbers
        for(int j=n+1-i; j>0; j--){
            cout<<i;
        }
        cout<<endl;
    };

    return 0;
}