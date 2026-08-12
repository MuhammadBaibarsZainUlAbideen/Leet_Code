#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>nn;
        for(int i = 0; i < nums.size(); i++){
            for(int  j = 0; j < nums.size();j++){
                if(nums[i]+nums[j]==target && i != j){
                    nn.push_back(i);
                    nn.push_back(j);
                    break;

                }
            

            }
            if(nn.size()==2){
                break;
            }
        }
        return nn;


        
    }
};

int main(){
    Solution s1;
    vector<int>n = {3,3};
    int targert = 6;
    vector<int>final=s1.twoSum(n,targert);
    for(int i = 0 ; i < final.size();i++){
        cout<<final[i];
    }
    return 0;
}
