#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    unordered_map<int,int>n;
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int prev_count = 0;
        for(int i =0; i< nums.size(); i++){
            if(nums[i] ==1){
                count +=1;
            }
            if(count >= prev_count){
                prev_count = count;
                
                
            }
            if(nums[i] !=1){
                count =0;
            }



        }
        return prev_count;
        
    }
};

int main(){
    Solution s1;
    vector<int>nn = {1,0,1,1,0,1};
    cout<<s1.findMaxConsecutiveOnes(nn);

    return 0;
};