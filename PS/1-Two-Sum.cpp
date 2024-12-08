class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; 
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                result.push_back(mp[complement]);
                result.push_back(i);
                return result;
            }
            mp[nums[i]] = i;
        }

        return result;
    }
};