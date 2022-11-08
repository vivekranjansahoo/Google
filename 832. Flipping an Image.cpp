class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int front =0;
        int end = image[front].size()-1;
        for(int i=0;i<image.size();i++){
            front = 0;
            end = image[i].size()-1;
            while(front<=end){
                swap(image[i][front],image[i][end]);
                  front++;
                   end--;
               }
            }
         for(int i=0;i<image.size();i++){
             for(int j = 0; j < image[i].size();j++){
                 image[i][j]=!image[i][j];
                 
             }
         }
         
        
         return image;
        }
};
