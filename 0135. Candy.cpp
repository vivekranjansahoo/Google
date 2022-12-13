class Solution {
public:
  int candy(vector<int>& ratings) {
    int n = ratings.size();
    vector<int> v(n,1);
    
    for(int j = 0, i = 1; i != n; i++, j++)
      if(ratings[j] < ratings[i]) v[i] = v[j] + 1;
    
    for(int i = n-2, j = n-1; j; i--, j--)
      if(ratings[i] > ratings[j])
        if(v[i] <= v[j]) v[i] = v[j] + 1;
        
    return accumulate(v.begin(), v.end(), 0);
  }
};
