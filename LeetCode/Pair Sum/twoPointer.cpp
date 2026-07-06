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
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int start = 0, end = n-1;

    while(start < end){
        int sum = a[start] + a[end];
        if(sum == target){
            cout<<target<<" = "<<a[start]<<" + "<<a[end]<<endl;
            break;
        }else if(sum > target){
            end--;
        }else{
            start++;
        }
    };

    return 0;
}