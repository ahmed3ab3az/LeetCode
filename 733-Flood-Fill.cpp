class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>& image , int original , int color){
        if( r < 0 || r >= image.size() || c < 0 || c >= image[0].size() || image[r][c] != original ){
             return;
        }
        image[r][c] = color;
        dfs(r+1 , c , image , original , color);
        dfs(r , c + 1  , image , original , color);
        dfs(r-1 , c , image , original , color);
        dfs(r , c-1 , image , original , color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color != image[sr][sc]){
            dfs(sr,sc,image,image[sr][sc],color);
        }
        return image;
        
    }
};