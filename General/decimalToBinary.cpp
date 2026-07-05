#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a base 10 number: ";
    cin>>n;
    int sum = 0;
    int pow = 1;

    while(n>0){
        int rem = n%2;
        sum += pow*rem;
        pow*=10;
        n=n/2;
    };

    cout<<"Binary form is: "<<sum<<endl;

    return 0;
}