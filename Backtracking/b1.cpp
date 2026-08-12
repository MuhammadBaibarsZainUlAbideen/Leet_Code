#include <iostream>
#include <vector>
using namespace std;

void backtracking(int index, vector<int>& path, vector<int>& aa, vector<vector<int>>& all_results) {
    if (index == aa.size()) {
        all_results.push_back(path); // Save this version of the path
        return; 
    }

   
    path.push_back(aa[index]);
    backtracking(index + 1, path, aa, all_results);


    path.pop_back();
    backtracking(index + 1, path, aa, all_results);
}

int main() {
    vector<int> aa = {1, 2, 3, 4};
    vector<int> path;
    vector<vector<int>> all_results;

    backtracking(0, path, aa, all_results);

    // Print all unique subsets found
    for (const auto& subset : all_results) {
        cout << "[ ";
        for (int num : subset) cout << num << " ";
        cout << "]" << endl;
    }

    return 0;
}