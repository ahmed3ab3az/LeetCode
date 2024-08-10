class Solution {
public:
    vector<int> twoSum(vector<int>& copy, int target) {
    int i = 0;
    int j = copy.size() - 1;
    while(true){
        if(copy[i] + copy[j] < target){
            i++;
        }else if(copy[i] + copy[j] > target){
            j--;
        }else{
            vector<int> ans = {i+1,j+1};
            return ans;
        }
        
    }
    }
};