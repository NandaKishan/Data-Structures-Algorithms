#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter sizes of both arrays: ";
    cin>>n1>>n2;
    int a[n1], b[n2];
    cout<<"Enter elements of both arrays: \n";
    for(int i=0; i<n1; i++){
        cin>>a[i];
    };
    for(int i=0; i<n2; i++){
        cin>>b[i];
    };

    for(int i=0; i<n1; i++){
        bool isCommon = false;
        for(int j=0; j<n2; j++){
            if(b[j] == a[i]){
                isCommon = true;
            }
        }
        if(isCommon){
            cout<<a[i]<<" ";
        }
    };
    cout<<endl;

    return 0;
}