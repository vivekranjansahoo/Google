class Solution {
public:
       vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        map<int,set<vector<int>>> m;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                int k=abs(i-r0)+abs(j-c0);
                m[k].insert({i,j});
            }
        }
        auto it=m.begin();
        vector<vector<int>> res;
        while(it!=m.end()){
            for(auto p:it->second) res.push_back(p);
            ++it;
        }
        return res;
    }
};
