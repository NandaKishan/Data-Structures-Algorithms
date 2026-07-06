#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    };
    int maxSum = INT16_MIN;

    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int sum = 0;
            for(int i=start; i<=end; i++){
                // cout<<a[i];
                sum += a[i];
            }
            // cout<<" ";
            maxSum = max(sum, maxSum);
        }
        // cout<<endl;
    };

    cout<<"Maximum Subarray Sum Is: "<<maxSum<<endl;

    return 0;   
}