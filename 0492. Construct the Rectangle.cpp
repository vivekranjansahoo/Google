class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>ans;
        int w=1;
        for(int i=1;i<=sqrt(area);i++){
            if(area%i==0)
              w=i;
        }
        ans.push_back(area/w);
        ans.push_back(w);
        return ans;
    }
};
