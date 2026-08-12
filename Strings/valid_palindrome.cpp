#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string news = "";
    string twisted="";
    bool isPalindrome(string &s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(char a:s){
            if(isalpha(a) || isdigit(a)){
                news += a;
            }


        }
        for(int i = news.size()-1;i>=0;i--){
            twisted += news[i];
        }
        cout<<news<<endl<<twisted;
        if(news == twisted){
            return true;
        }
        return false;




        
    }
};

int main(){
    string s = "0p";
    Solution s1;
    cout<<s1.isPalindrome(s);


    return 0;

};