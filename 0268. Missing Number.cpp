class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<=nums.size();i++){
            ans.push_back(i);
        }
        int m=accumulate(nums.begin(),nums.end(),0);
        int m1=accumulate(ans.begin(),ans.end(),0);
        return m1-m;
    }
};



======================================================


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<=nums.size();i++){
            if(i<nums.size()){
                ans=ans^nums[i]^i;
            }
            else
              ans=ans^i;
        }
        return ans;
    }
};
