/*
Example-1:
---------------------------
Input: nums = [1,2,5,2,3], target = 2
Output: [1,2]
Explanation: After sorting, nums is [1,2,2,3,5].
The indices where nums[i] == 2 are 1 and 2.

Example-2:
---------------
Input: nums = [1,2,5,2,3], target = 3
Output: [3]
Explanation: After sorting, nums is [1,2,2,3,5].
The index where nums[i] == 3 is 3.

*/



class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(begin(nums),end(nums));
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
              ans.push_back(i);
        }
        return ans;
    }
};
