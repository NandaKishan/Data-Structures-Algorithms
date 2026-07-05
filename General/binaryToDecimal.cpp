#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;

    int sum=0, pow = 1;

    while(n>0){
        int rem = n%10;
        sum += rem*pow;
        pow*=2;
        n=n/10;
    }

    cout<<"Decimal form is: "<<sum<<endl;

    return 0;
}