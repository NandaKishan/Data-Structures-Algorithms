#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    };

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(a[j] == a[i]){
                count++;
            }
        }
        if(count == 1){
            cout<<a[i]<<" ";
        }
    };

    return 0;
}