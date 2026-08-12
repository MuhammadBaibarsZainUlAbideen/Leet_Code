#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

struct Window{
    int maxVal;
    int maxIndex;
    int sum;
    bool hasMultipleMaxima;
};






vector<Window> slidingWindow(vector<int>& arr, int k){
    vector<int> a;
    vector<vector<int>> b;
    vector<Window>final;
    for(int i = 0; i <= arr.size()-k; i++){
        for(int j =  i ; j < i+k ; j++){
            a.push_back(arr[j]);


        }
        b.push_back(a);
        a.clear();
    }
    for(int i = 0; i < b.size();i++){
        auto max_value = *max_element(b[i].begin(),b[i].end());
        int max_index = 0;
        for(int j =1; j< b[i].size();j++){
            if(b[i][j] > b[i][max_index]){
                max_index = j;
            }
        }
        auto sum = accumulate(b[i].begin(),b[i].end(),0);
        int count = 0;
        bool has = false;
        for(int j =0;j<b[i].size();j++){
            if(max_value == b[i][j] && count >= 1){
                has = true;
            }
            else if (max_value == b[i][j] && count < 1){
                count ++;
            } 
        }

        Window a = {max_value,max_index,sum,has};
        final.push_back(a);
        


    }
    return final;
    


}



int main(){
    vector<int>arr = {3,1,3,5,2,4};
    int k = 3;
    vector<Window> results = slidingWindow(arr, k);
    for(auto  r : results){
        cout<<"Max:"<<r.maxVal
        <<" Index:" << r.maxIndex
        <<" Sum:" << r.sum
        <<" Duplicate:"<< r.hasMultipleMaxima<<"\n";
    }

    return 0;
}