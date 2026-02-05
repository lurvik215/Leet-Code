class Solution {
public:
    double myPow(double x, int n) {
        if(n==0 || x==1){
            return 1.0;
        }
        if(x == 0){
            return 0.0;
        }
        if(x==-1 && n%2==0)return 1.0;
        if(x==-1 && n%2!=0)return -1.0;
        long bin_form = n;
        double ans = 1;
        if(n<0){
            x = 1/x;
            bin_form = -bin_form;
        }
        while(bin_form>0){
            if(bin_form%2==1){
                ans = ans*x;
            }
            x*=x;
            bin_form/=2;
        }
        return ans;
    }
};