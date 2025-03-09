class Solution {
private:
    int maxAmount(vector<int> nums){
        int rob = nums[0];
        int noRob = 0;
        int prevRob;
        for(int i=1;i<nums.size();i++){
            prevRob = rob;
            rob = noRob+nums[i];
            noRob = max(prevRob,noRob);
        }
        return max(rob,noRob);
    }
public:
    int rob(vector<int>& nums) {
        return maxAmount(nums);
    }
};