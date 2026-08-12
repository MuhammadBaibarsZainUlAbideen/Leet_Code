#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    unordered_map<int,int>n1;
    vector<pair<int,int>>n;
    int count = 1;
    int scount =0;
    static bool sorting(pair<int,int>a,pair<int,int>b){
        return a.first<b.first;


    }
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() ==0){
            return count-1;
        }
        for(int i = 0; i< nums.size();i++){
            n1[nums[i]] +=1;
        }
        for(auto a : n1){
            n.push_back(a);
        }
        sort(n.begin(),n.end(),sorting);
        for(int ii = 1; ii < n.size();ii++){
            if(n[ii].first - n[ii-1].first != 1){
                if(count > scount){
                    scount = count;
                }
                count = 1;
            }
            else{
                count +=1;
            }
        }
        if(count > scount){
            return count;
        }
        return scount;


        
    }
};

int main(){
    Solution s1;
    vector<int>n1= {1,2,6,7,8};
    cout<<s1.longestConsecutive(n1);

    return 0;
}