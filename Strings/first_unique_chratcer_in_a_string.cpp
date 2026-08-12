#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    unordered_map<char,int>nn;
    int firstUniqChar(string s) {
        for(char a : s){
            nn[a] +=1;
        }
        
        for(auto b:s){
            if(nn[b] == 1){
                int index =s.find(b);
                return index;
            }
        }
        return -1;
        
    }
};

int main(){
    string s1 = "loveleetcode";
    Solution s11;
    cout<<s11.firstUniqChar(s1);

    return 0;

};