#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int>newa;
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverse(nums.begin(),nums.end());
        int check = k;
        reverse(nums.begin(),nums.begin()+check);
        reverse(nums.begin()+check,nums.end());
        for(auto ff : nums){
            cout<<ff<<" ";
        }


    };


        
    
};


int main(){
    Solution s;
    vector<int>n = {-1};
    s.rotate(n,2);
    return 0;
}