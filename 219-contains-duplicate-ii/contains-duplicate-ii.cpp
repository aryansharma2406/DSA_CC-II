class Solution {
public: 
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            if (seen.find(x) != seen.end() && i - seen[x] <= k) {
                return true;
            }
            seen[x] = i;
        }
        return false;        
    }
};