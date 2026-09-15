class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<long long, int> seenl;
        seenl[0] = 1;

        long long prefixsum = 0;
        long long ans = 0;

        for (int x : nums) {

            prefixsum += x;

            long long required = prefixsum - k;

            if (seenl.count(required)) {
                ans += seenl[required];
            }

            seenl[prefixsum]++;
        }

        return ans;
    }
};