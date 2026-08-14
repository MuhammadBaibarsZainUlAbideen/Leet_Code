#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int left=0;
        int best =0;
        int sum = 0;
        

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                return 1;
            }

            sum = sum + nums[i];
            if(sum >= target){
                best = (best == 0) ? (i+1) : min(best, i+1);
                while (sum - nums[left] >= target){
                    
                    best = min(best, i - left);
                    sum -= nums[left];
                    left +=1;

                }

            }
            

        }
        return best;
        
    }
};
int main()
{
    Solution s1;
    vector<int> a = {1,2,3,4,5};
    cout<<s1.minSubArrayLen(15,a);
    
    return 0;
}