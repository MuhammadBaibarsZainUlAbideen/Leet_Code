#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    unordered_map<int,int>nn;

    vector<pair<int,int>>n1;
    vector<int>nnn;
    int highest =0;
    int second_highest=0;
    static bool compare(pair<int,int>a,pair<int,int>b){
        return a.second>b.second;

    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        for(auto a : nums){
            nn[a]+=1;

        }
        for(auto b : nn){
            n1.push_back(b);


        }
        sort(n1.begin(),n1.end(),compare);
        for(int i = 0; i < k;i++ ){
            nnn.push_back(n1[i].first);

        }
        return nnn;



        
    }
};

int main(){
    vector<int>a = {1,2,1,2,1,2,3,1,3,2};
    Solution s11;
    for(auto i:s11.topKFrequent(a,2)){
        cout<<i;
    }



    return 0;

};