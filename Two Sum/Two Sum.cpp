#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map; // 存儲數字及其索引
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // 計算補數
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i}; // 找到答案
            }
            num_map[nums[i]] = i; // 存儲數字及索引
        }
        return {}; 
    }
};

