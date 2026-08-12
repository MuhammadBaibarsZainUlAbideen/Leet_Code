#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


class Solution {
public:



    vector<int> productExceptSelf(vector<int>& nums) {
        int left = 1;
        int right = 1;
        vector<int>p(nums.size());
        for(int i = 0 ; i < nums.size();i++){
            p[i] = 1;
        }

        for(int j = 0; j < nums.size();j++){
            if (j ==0){
                p[j] = 1;

            }
            else{
                left = left * nums[j-1];
                p[j] = left;
            }
        }
        for(size_t r=nums.size();r-->0;){
            if (r ==nums.size()-1){
                p[r] = p[r]*1;

            }
            else{
                right = right * nums[r+1];
                p[r] = p[r]*right;
            }

        }
    
        return p;



        
    }
    
};

int main(){
    Solution s;
    vector<int>aa = {1,2,3,4};
    vector<int>p1 =  s.productExceptSelf(aa);
    for (int f = 0 ; f < p1.size();f++){
        cout<<p1[f];
    }

}