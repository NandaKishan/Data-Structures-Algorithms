//53

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of lements: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elements: ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    };

    int currentSum = 0, maxSum = INT16_MIN;
    for(int i=0; i<n; i++){
        currentSum+=a[i];
        maxSum = max(currentSum, maxSum);
        if(currentSum<0){
            currentSum = 0;
        }
    };

    cout<<"Maximum Subarray Sum Is: "<<maxSum<<endl;

    return 0;
}

/* Notes

*/