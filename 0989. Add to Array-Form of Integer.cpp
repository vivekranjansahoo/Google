class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        vector<int>res;
        int sum=0;
         int rem=0;
         int i=n-1;
        while(i>=0 || k>0){
            if(i>=0){
             sum=num[i]+k;
             rem=sum%10;
            res.push_back(rem);
            k=sum/10;
            }
            else {
               
                res.push_back(k%10);
                k=k/10;
            }
            i--;
        }
      reverse(res.begin(),res.end());
      return res;
    }
};
