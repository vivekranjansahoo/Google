/*
Example-1:
----------------------------
Input: rings = "B0B6G0R6R0R6G9"
Output: 1
Explanation: 
- The rod labeled 0 holds 3 rings with all colors: red, green, and blue.
- The rod labeled 6 holds 3 rings, but it only has red and blue.
- The rod labeled 9 holds only a green ring.
Thus, the number of rods with all three colors is 1.


Example-2:
--------------------
Input: rings = "B0B6G0R6R0R6G9"
Output: 1
Explanation: 
- The rod labeled 0 holds 3 rings with all colors: red, green, and blue.
- The rod labeled 6 holds 3 rings, but it only has red and blue.
- The rod labeled 9 holds only a green ring.
Thus, the number of rods with all three colors is 1.


Example-3: 
-------------
Input: rings = "G4"
Output: 0
Explanation: 
Only one ring is given. Thus, no rods have all three colors.


*/


//1st Approach  (Counting Arrays )

class Solution {
public:
    int countPoints(string rings) {
        int r[10] = {0};
        int g[10] = {0};
        int b[10] = {0};
        
        int rod  = 0;
        for(int i=0;i<rings.size();i+=2){
		 //convert char to integer
            rod = rings[i+1] - '0';
            
			//wherever rings are present add it in that colour array
            if(rings[i] == 'R'){
                r[rod]++;
            }
            else if(rings[i] == 'G'){
                g[rod]++;
            }
            else if(rings[i]== 'B'){
                b[rod]++;
            }
        }
        
		 //if all three rings are present increase count
        int count = 0;
        
        for(int j=0;j<10;j++){
            if(r[j] > 0 && g[j] > 0 && b[j] > 0){
                count++;
            }
        }
        return count;
    }
};


//2nd Approach  (Bits) 

int countPoints(string rings) {
    int rods[10] = {};
    for (int i = 0; i < rings.size(); i += 2) {
        int color = rings[i] == 'R' ? 1 : rings[i] == 'G' ? 2 : 4;
        rods[rings[i + 1] - '0'] |= color;
    }
    return count(begin(rods), end(rods), 7);
}

//3rd Approch (Map and Set) 

class Solution {
public:
    int countPoints(string rings) {
       unordered_map<int,set<char>>m;
        for(int i=0;i<rings.size();i+=2){
            m[rings[i+1]-'0'].insert(rings[i]);
        }
        int count=0;
        for(auto it:m){
            if(it.second.size()==3)count++;
        }
        return count;
    }
};
