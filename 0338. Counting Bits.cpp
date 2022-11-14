/*
Exmple-1 
-----------------

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10

Example-2 : 
-------------------

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101

*/

//Code

Solution-1
-------------------------------------------
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        ans[0]=0;
        for(int i=1;i<=n;++i){
            ans[i]=ans[i/2]+i%2;
        }
        return ans;
    }
};

----------------------------------------------
 Solution-2 
 -------------------------------------------------------------
  class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int sum=0;
            int num=i;
            while(num!=0){
                sum=sum+num%2;
                num=num/2;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
  
