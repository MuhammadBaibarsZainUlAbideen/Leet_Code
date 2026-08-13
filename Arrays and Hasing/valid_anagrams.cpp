#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if( s.size() != t.size()){
            return false;
        }
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(auto a: s){
            mp1[a] = mp1[a]+1;
        }
        for(auto i: t){
            mp2[i] = mp2[i]+1;
        }
        if(mp1 == mp2){
            return true;
        }
        return false;
        



        

    }
};
int main()
{
    
    return 0;
}