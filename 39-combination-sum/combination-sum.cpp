class Solution {
public:
    void solve(int ind, vector<vector<int>>& ans,
               vector<int>& ds, vector<int>& cand, int target) {

        // Reached the end of candidates
        if (ind == cand.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }

        // Pick current candidate
        // Stay at the same index because it can be reused
        if (cand[ind] <= target) {
            ds.push_back(cand[ind]);

            solve(ind, ans, ds, cand, target - cand[ind]);

            // Backtrack
            ds.pop_back();
        }

        // Skip current candidate
        solve(ind + 1, ans, ds, cand, target);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates,
                                        int target) {

        vector<vector<int>> ans;
        vector<int> ds;

        solve(0, ans, ds, candidates, target);

        return ans;
    }
};