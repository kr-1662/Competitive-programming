// Two Sum Problem Leetcode

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map <int, int> hashmap;
    unordered_map <int, int>::iterator it;
    vector<int> solution_vector;

    for(int i = 0; i < nums.size(); i++) 
    {
        hashmap[nums.at(i)]=i;
    }
    for(int j = 0; j < nums.size(); j++) {
        int complement = target - nums.at(j);
        if (hashmap.count(complement) && (hashmap.find(complement)->second) !=j) {
            solution_vector.push_back(j);
            solution_vector.push_back(hashmap.find(complement)->second);
            return solution_vector;
        }
        }
    return solution_vector;
}

int main() {
    vector<int> vec{2,7,11,15};
    int t = 9;

    twoSum(vec, t);

    return 0;
}