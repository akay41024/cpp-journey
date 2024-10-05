#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;


int majorityElem(vector<int>& nums, int n){

    //TODO Brute force approach
    // for(int i = 0; i < n; i++){
    //     int count = 0;
    //     for(int j = 0; j < n; j++){
    //         if(nums[i] == nums[j]){
    //             count++;
    //         }
    //     }
    //     if(count > n/2){
    //         return nums[i];
    //     }
    // }
    // return -1;

    //TODO Moore's Voting Algorithm
    // int count = 0;
    // int candidate = 0;
    // for(int i = 0; i < n; i++){
    //     if(count == 0){
    //         candidate = nums[i];
    //     }
    //     if(candidate == nums[i]){
    //         count++;
    //     }
    //     else{
    //         count--;
    //     }
    // }

    // return candidate;

    //TODO Boyer-Moore Voting Algorithm
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++){
        m[nums[i]]++;
    }

    for(auto i : m){
        if(i.second > n/2){
            return i.first;
        }
    }
    return -1;
}


int main(){
    vector<int> v = {2, 2, 1, 1, 1, 2, 2};
    int n = v.size();


    int ans = majorityElem(v, n);
    cout << "Majority Element is " << ans << endl;
    return 0;
}