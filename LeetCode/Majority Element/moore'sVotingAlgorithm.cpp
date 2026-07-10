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

    int freq = 0, ans;

    for(int i=0; i<n; i++){
        if(freq == 0){
            ans = v[i];
        }
        if(ans == v[i]){
            freq++;
        }else{
            freq--;
        }
    };

    cout<<"The majority element is: "<<ans<<endl;

    return 0;
}