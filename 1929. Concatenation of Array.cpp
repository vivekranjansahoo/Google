class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
    
       //without extra space

     /*
        int len=nums.size();
        for(int i=0;i<len;i++){
            nums.push_back(nums[i]);
        }
 
        return nums;
     */


        //with extra space

     /*
         // vector<int> ans;
        for(int i=0;i<len;i++){
            ans.push_back(nums[i]);
        }
         for(int i=0;i<len;i++){
            ans.push_back(nums[i]);
        }

        return ans;

    */

    // math 

    int len=nums.size();
    vector<int> add(len*2);
    for(int i=0;i<len;i++){
        add[i]=nums[i];
        add[(len*2)-(len-i)]=nums[i];
    }
    return add;
    }
};
