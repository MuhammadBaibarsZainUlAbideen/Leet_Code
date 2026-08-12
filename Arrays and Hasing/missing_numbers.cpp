#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int>nn;
    int missingNumber(vector<int>& nums) {
        for(int i = 0; i <= nums.size(); i++){
            nn.push_back(i);

        }
        sort(nums.begin(),nums.end());
        for(int j = 0 ; j < nums.size();j++){
            if(nums[j] != nn[j]){
                return nn[j];
            }
            
                
            

        }
        return nn[nn.size()-1];

        
    }
};

int main(){
    Solution s1;
    vector<int>n = {9,6,4,2,3,5,7,0,1};
    cout<<s1.missingNumber(n);

    return 0;

};
