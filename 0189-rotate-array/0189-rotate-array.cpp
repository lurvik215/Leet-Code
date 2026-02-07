class Solution {
public:
    void rotate(vector<int>&nums, int k){
        int n = nums.size();
        k = k%n;
        reverse_arr(nums,n-k,n-1);
        reverse_arr(nums,0,n-k-1);
        reverse_arr(nums,0,n-1);

    }
    void reverse_arr(vector<int>&nums, int start, int end){
        int temp;
        while(start<end){
            temp= nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
};