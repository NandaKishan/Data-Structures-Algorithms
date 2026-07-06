/* 136
Given a non-empty array of integers nums, every element appears twice 
except for one. Find that single one.
You must implement a solution with a linear runtime complexity 
and use only constant extra space.
*/

#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int n = 0;
    for(int val : nums){
        n^=val;
    };
    return n;
}

int main() {
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cout<<singleNumber(v);
    
    return 0;
}