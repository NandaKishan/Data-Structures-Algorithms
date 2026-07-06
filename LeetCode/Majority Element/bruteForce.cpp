//O(n^2) time complexity
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n;i++){
        cin>>a[i];
    };

    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(a[j] == a[i]){
                count++;
            }
        }
        if(count > n/2){
            cout<<"Majority Element is: "<<a[i]<<endl;
            break;
        }
    };

    return 0;
}