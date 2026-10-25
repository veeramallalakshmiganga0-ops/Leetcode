class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>m;
        int sum =0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            m.push_back(sum);
        }
        return m;
    }
};