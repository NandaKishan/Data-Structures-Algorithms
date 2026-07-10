#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements in vector: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    };

    int bestBuy = v[0], maxProfit = 0;
    for(int i=1; i<n; i++){
        if(v[i] > bestBuy){
            maxProfit = max(maxProfit, v[i]-bestBuy);
        }
        bestBuy = min(bestBuy,v[i]);
    };

    if(maxProfit > 0){
        cout<<maxProfit<<endl;
    }else{
        cout<<"No Profit Possible"<<endl;
    };

    return 0;
}