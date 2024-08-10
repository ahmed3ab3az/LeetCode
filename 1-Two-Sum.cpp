class Solution {
public:
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>copy = nums;
    sort(copy.begin() , copy.end());
    int i = 0;
    int j = nums.size() - 1;
    while(true){
        if(copy[i] + copy[j] < target){
            i++;
        }else if(copy[i] + copy[j] > target){
            j--;
        }else{
            for(int k = 0 ; k <nums.size() ; k++ ){
                if(copy[i] == nums[k]){
                    i = k;
                    break;
                }
            }
            for(int k = 0; k <nums.size() ; k++ ){
                if(copy[j] == nums[k] && k != i){
                    j = k;
                    break;
                }
            }
            vector<int> ans = {i,j};
            return ans;
        }
    }
}
};