class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int cnt = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int child_idx = 0;
        int cookie_idx = 0;
        while (child_idx<g.size() && cookie_idx < s.size()){
            if(s[cookie_idx] >= g[child_idx]){
                cnt++;
                child_idx++;
            }
            cookie_idx++;
        }
        return cnt;
    }
};