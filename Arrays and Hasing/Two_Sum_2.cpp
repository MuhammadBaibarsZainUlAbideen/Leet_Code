#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> output;
        int starting = 0;
        int end = numbers.size()-1;
        for(int i = 0; i < numbers.size(); i++){
            if(numbers[starting] + numbers[end] == target){
                output.push_back(starting+1);
                output.push_back(end+1);
                return output;
            }else if (numbers[starting] + numbers[end] > target){
                end -= 1;
            }else if (numbers[starting] + numbers[end] < target){
                starting +=1;
            }
        }
        return output;
        
    }
};
int main()
{
    
    return 0;
}