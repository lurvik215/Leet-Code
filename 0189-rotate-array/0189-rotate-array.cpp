class Solution {
public:
    void rotate(vector<int>& nums, int k){
        int n = nums.size();
        k = k%n;
        vector<int>temp;
        for(int i = n-1; i>=n-k; i--){
            temp.push_back(nums[i]);
        }
        int m = temp.size();
        for(int j = n-k-1; j>=0; j--){
            nums[j+k] = nums[j];
        }
        for(int l = k-1; l>=0; l--){
            nums[l] = temp[k-l-1];
        }
    }
};