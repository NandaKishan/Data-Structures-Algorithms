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
        for(int j=n-i; j>1; j--){
            cout<<" ";
        }
        //spaces3
        for(int j=n-i-1; j>1; j--){
            cout<<" ";
        }
        //stars2
        if(i!=n-1){
            cout<<"*";
        }
        cout<<endl;
    };

    return 0;
}

//Notes
/*There's no need of a count variable, all its doing is keeping track of
what iteration we're on and clearly i does that, thats the whole reason for using i, 
first think what we need, we need star to not be there on first line
but what does first line mean? it means firest iteratio and the iteration
identifier is just i 
*/