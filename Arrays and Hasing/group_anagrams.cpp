#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>master;
        unordered_map<string,vector<string>>mp;
        for(int  i = 0 ; i < strs.size();i++){
            string current = strs[i];
            sort(current.begin(),current.end());
            mp[current].push_back(strs[i]);
        }
        for(auto j : mp){
            master.push_back(j.second);
        }
        return master;

    }

};
int main(){
    Solution s;
    vector<string>m = {"tea","eat","nut"};
    vector<vector<string>>gg = s.groupAnagrams(m);
    for (auto group : gg) {
        cout << "[ ";
        for (auto str : group) {
            cout << str << " ";
        }
        cout << "]\n";
    }
    return 0 ;

};