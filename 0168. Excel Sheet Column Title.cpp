//1st solution

-----------------------------------
  class Solution {
public:
    string convertToTitle(int columnNumber) {
       int n=columnNumber;
       return n==0 ? "": convertToTitle((n-1)/26)+(char)((n-1)%26+'A');
    }
};



========================
  
  2nd Solution
  
  ======================================================
  
  class Solution {
public:
    string convertToTitle(int columnNumber) {
        string all="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int n=columnNumber;
        string ans="";
        while(n>0){
            n--;
            int k=n%26;
            ans.push_back(all[k]);
            n=n/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
