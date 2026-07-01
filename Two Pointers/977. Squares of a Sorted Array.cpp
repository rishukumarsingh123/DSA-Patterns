class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            nums[low]=nums[low] * nums[low];
            if (low != high) {          
                nums[high] = nums[high] * nums[high];
            }
            low++;
            high--;
        }
        sort(nums.begin(),nums.end());
        return nums;
        
    }
};
