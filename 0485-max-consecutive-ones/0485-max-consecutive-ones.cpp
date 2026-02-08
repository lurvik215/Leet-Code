class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int max_num = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]==1){
                count++;
                max_num = max(max_num,count);
            }
            if(nums[i]==0){
                count = 0;
            }

        }
        return max_num;
    }
};