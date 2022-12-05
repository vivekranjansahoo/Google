class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int size = nums.size();
        int half = size/2;
        
        if(size == 0)
            return NULL;
        
        TreeNode* root = new TreeNode(nums[half]);
        
        if(size == 1)
            return root;
            
        vector<int>left(nums.begin(), nums.begin() + half);
        vector<int>right(nums.begin() + half + 1, nums.end());
        root->left = sortedArrayToBST(left);
        root->right = sortedArrayToBST(right);
        
        return root;
    }
};
