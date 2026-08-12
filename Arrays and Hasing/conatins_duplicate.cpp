#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
    public:
        unordered_map<int,int>mp;

        bool containsDuplicate(vector<int>& nums) {
            for(int i = 0 ; i<nums.size();i++){
                mp[nums[i]] +=1;
            }
            for(int j = 0; j < nums.size();j++){
                if(mp[nums[j]] > 1){
                    return true;
                }
            }
            return false;

        
        }
};
int main(){
    Solution s;
    vector<int>n = {1,2,3,4};
    cout<<s.containsDuplicate(n);

    return 0;

}