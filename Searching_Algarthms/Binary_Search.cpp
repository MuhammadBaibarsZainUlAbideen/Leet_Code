#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    vector<int>a = {12,23,56,78,99,990};
    
    int max_sie = a.size();
    int lowest = 0;
    
    int value = 50;
    for(int i = 0 ; i < a.size();i++){
        int msize = (max_sie +lowest)/2;
    
        if(value == a[msize]){
            cout<<msize;
            
            return msize;
        }
        else if (value < a[msize]){
            max_sie = msize;
        }
        else if (value > a[msize]){
            lowest = msize;
        }
    }
    cout<<"Error";





    return 0;
}