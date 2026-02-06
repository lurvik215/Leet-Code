class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_con = 0;
        int st = 0;
        int end = height.size()-1;
        while(st<end){
            int h = min(height[st],height[end]);
            int w = end - st;
            max_con = max(max_con,h*w);
            height[st]<height[end]?st++:end--;

        }
        return max_con;
    }
};