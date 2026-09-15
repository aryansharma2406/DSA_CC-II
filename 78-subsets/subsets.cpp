class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int sz=1<<nums.size();
        vector<vector<int>> res(sz);
        int idx;int temp;
        for(int i=0;i<sz;i++){
            idx=0;temp=i;
            while(temp!=0){
                if(temp%2)res[i].push_back(nums[idx]);
                temp/=2;idx++;
            }
        }
       return res;
    }
};