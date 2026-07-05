/*To Calculate nCr*/
#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*=i;
    };
    return fact;
}

int nCr(int n, int r){
    int nCr = (factorial(n))/(factorial(n-r)*factorial(r));
    return nCr;
}

int main(){
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;

    cout<<"nCr = "<<nCr(n,r)<<endl;
    
    return 0;
}