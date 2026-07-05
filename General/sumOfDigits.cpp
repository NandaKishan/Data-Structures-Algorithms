/*To calculate the sum of digits of a base 10 integer*/
#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int sum = 0;

    while(n>0){
        int rem = n%10;
        sum+=rem;
        n/=10;
    };

    return sum;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    cout<<"Sum of digits is "<<sumOfDigits(n)<<endl;

    return 0;
}