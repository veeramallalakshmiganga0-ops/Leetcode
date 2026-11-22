class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int x =0;
        for(int i:nums){
            x|=i;
        }
        return x*(1<<(nums.size()-1));
    }
};