class Solution {
public:

    /*
    int lcm(int a,int b){
        return a*b/__gcd(a,b);
    }
    */

    int subarrayLCM(vector<int>& nums, int k) {
        int ans=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            int temp=nums[i];
            for(int j=i;j<n;j++){
                temp=lcm(temp,nums[j]);
                if(temp==k)
                ans++;
                
                if(temp>k)
                break;
                
            }
        }
        return ans;
    }
};
