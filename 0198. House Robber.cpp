class Solution {
public:
    int rob(vector<int>& nums) {
        int a=0,b=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int temp=max(a+nums[i],b);
            a=b;
            b=temp;
        }
        return b;
    }
};
