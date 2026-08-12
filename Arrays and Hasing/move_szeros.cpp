#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i =0;i < nums.size();i++){
            for(int j = i+1 ; j < nums.size();j++){
                
                if(nums[i] == 0 && nums[j] != 0){
                    int temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;


                }

            }

        }
        

        
    }
};

int main(){
    Solution s1;
    vector<int>n = {0,1,0,3,12};
    s1.moveZeroes(n);
    for(int i = 0 ; i < n.size();i++){
        cout<<n[i]<<" ";
    }




    return 0;
}