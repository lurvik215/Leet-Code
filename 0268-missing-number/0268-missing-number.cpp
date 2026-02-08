class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int x1 = 0;
        int x2 = 0;
        for(int i = 0;i<=n;i++){
            x1^=i;
        }
        for(int i = 0; i<n; i++){
            x2^=nums[i];
        }
        int m_n = x1^x2;
        return m_n;
    }
};