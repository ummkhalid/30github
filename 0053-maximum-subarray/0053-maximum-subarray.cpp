class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int temp = nums[0];
    int ans = temp;
    for(int i=1; i<nums.size();i++){
        temp = max(temp+nums[i], nums[i]);
        ans = max(ans, temp);
    }
    return ans;    
    }
};