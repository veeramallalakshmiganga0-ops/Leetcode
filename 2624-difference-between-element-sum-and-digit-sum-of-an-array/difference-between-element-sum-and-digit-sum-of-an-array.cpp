class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum =0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
        }
        int sumd=0;
        for(int i=0; i<nums.size(); i++){
            int temp = nums[i];
            while(nums[i]!=0){
                int d = nums[i]%10;
                sumd+=d;
                nums[i]/=10;
            }
        }
        int m = abs(sum-sumd);
        return m;
    }
};