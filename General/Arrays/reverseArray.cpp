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

    cout<<"Array elements before reversal: \n ";
    for(int i=0; i<n; i++){
        cout<<a[i];
    };
    cout<<endl;

    int start = 0, end = n-1;
    while(start < end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++; end--;
    }

    cout<<"Array elements after reversal: \n ";
    for(int i=0; i<n; i++){
        cout<<a[i];
    };
    cout<<endl;

    return 0;
}