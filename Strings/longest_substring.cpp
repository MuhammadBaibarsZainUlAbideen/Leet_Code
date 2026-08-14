#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<char> v1;
        int highest_sequence = 0;
        if(s.size() == 1){
            return 1;
        }
        for(int i = 0 ; i < s.size(); i++){
            auto it = find(v1.begin() , v1.end(), s[i]);
            if(it == v1.end()){
                v1.push_back(s[i]);
                if(v1.size() > highest_sequence){
                    highest_sequence = v1.size();
                }
            }
            else{
                v1.erase(v1.begin(),  it + 1);
                v1.push_back(s[i]);
                if(v1.size() >= highest_sequence){
                    highest_sequence = v1.size();
                }

            }
        }
        return highest_sequence;

        
    }
};
int main()
{
    
    return 0;
}