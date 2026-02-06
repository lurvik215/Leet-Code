class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size(),1);
        //store prefix direct in nums_prod
        for(int i = 1; i<nums.size(); i++){
            ans[i] = ans[i-1]*nums[i-1];
        }
        //initialise suffix = 1
        int suffix = 1;
        for(int i = nums.size()-2; i>=0; i--){
            suffix*=nums[i+1];
            ans[i] *= suffix;
        }
        return ans;
    }
};