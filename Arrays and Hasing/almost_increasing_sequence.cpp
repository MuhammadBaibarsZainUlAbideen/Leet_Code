#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {40, 50, 60, 10, 20, 30};
    vector<int>output;
    int count = 0;
    for(int i =0; i < a.size()-1;i++){
        // cout<<count;
        
        if(a[i+1] - a[i] >0){
            output.push_back(a[i]);
            if(i == a.size()-2){
                output.push_back(a[a.size()-1]);

            }
        }
        else{
            count++;
            if(count == 2){
                return -1;
            }

        }
            
        


    }
    
    for (auto ii:output){
        cout<<ii;
    }



    return 0;
}