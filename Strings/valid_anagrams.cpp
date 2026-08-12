#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;


class Solution {
public:
    unordered_map<char,int>n1;
    unordered_map<char,int>n2;
    bool isAnagram(string s, string t) {
        for(char a:s){
            n1[a] +=1;
        }
        for(char b : t){
            n2[b] +=1;
        }
        return (n1==n2);



        
    }
};

int main(){
    string s1 = "anagram";
    string s2 = "nagaram";
    Solution s11;
    cout<<s11.isAnagram(s1,s2);

    return 0;

};