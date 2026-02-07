class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        for(int i = 0; i<n; i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        int m = temp.size();
        for(int j = 0; j<m; j++){
            nums[j]=temp[j];
        }
        for(int k = m; k<n; k++){
            nums[k]=0;
        }
    }
};