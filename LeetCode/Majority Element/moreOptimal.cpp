//O(nlogn) time complexity since is takes that much to sort
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    };

    sort(v.begin(), v.end());

    int freq = 1, ans = v[0];
    for(int i=1; i<n; i++){
        if(v[i] == v[i-1]){
            freq++;
        }else{
            freq=0;
            ans = v[i];
        }
        if(freq > n/2){
            cout<<v[i]<<endl;;
            break;
        }
    };
  
    
    return 0;
}