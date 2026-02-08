class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s = (n*(n+1))/2;
        int a_s = 0;
        for(int i = 0; i<n; i++){
            a_s+=nums[i];
        }
        int m_n = s-a_s;
        return m_n;
    }
};