#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of columns: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter column values: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    };

    int lp=0, rp=n-1;
    int currentWater=0, maxWater=0;
    while(lp < rp){
        int w = rp-lp;
        int h = min(v[lp],v[rp]);
        currentWater = w*h;
        maxWater = max(currentWater,maxWater);
        v[lp]<v[rp]?lp++:rp--;
    };  

    cout<<maxWater<<endl;

    return 0;
}

//bruteforceapproach: