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

    int min = INT16_MAX;
    int max = INT16_MIN;
    int minIndex, maxIndex;

    for(int i=0; i<n; i++){
        if(a[i] < min){
            min = a[i];
            minIndex = i;
        }
        if(a[i]>max){
            max = a[i];
            maxIndex = i;
        }
    };
    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;

    cout<<"Array elements after swap: \n ";
    for(int i=0; i<n; i++){
        cout<<a[i]<< " ";
    };
    cout<<endl;

    return 0;
}