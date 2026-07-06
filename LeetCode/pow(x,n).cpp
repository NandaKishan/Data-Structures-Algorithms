//using binary exponentiation
#include<iostream>
using namespace std;

double myPow(double x, int n){
    if(n<0){
        x = 1/x;
        n = -n;
    };

    long binaryForm = n;
    double ans = 1;

    while(binaryForm > 0){
        if(binaryForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binaryForm /= 2;
    };

    return ans;
}

int main(){
    int x,n;
    cout<<"Enter x, n for x^n: ";
    cin>>x>>n;
    cout<<"Answer is: "<<myPow(x,n)<<endl;

    return 0;
}