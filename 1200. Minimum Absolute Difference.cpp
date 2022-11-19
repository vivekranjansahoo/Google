class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int min=INT_MAX;
        vector<vector<int>>temp;

        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]<min){
                min=arr[i]-arr[i-1];
                temp.clear();
                temp.push_back({arr[i-1],arr[i]});
            }
            else if(arr[i]-arr[i-1]==min){
                temp.push_back({arr[i-1],arr[i]});
            }
          
        }
          return temp;
    }
};
