#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        for(int i = 0; i < nums.size(); i++){
            for(int j =i+1; j < nums.size();j++){
                int num1 = nums[i];
                int num2 = nums[j];
                if(num1 + num2 == target){
                    a.push_back(i);
                    a.push_back(j);
                    return a;
                    
                }


            }
        }
       
        
        
    }
};

int main()
{
    Solution obj1;
    vector<int> demo = {3,2,3};
    vector<int> output = obj1.twoSum(demo, 6);
    for(auto a : output){
        cout<<a;
    }


    
    return 0;
}