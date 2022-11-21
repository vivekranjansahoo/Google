class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>ans;
        vector<int>res;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    
                   // int k=nums1[i];
                    ans.insert(nums1[i]);
                    break;
                       
                }
                
            }
        }
        res.assign(ans.begin(),ans.end());
        return res;
    }
};
