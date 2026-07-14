class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int len;
        int minLen=INT_MAX;
        int j=0,i=0;
        int n=nums.size();
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                len=j-i+1;
                minLen=min(minLen,len);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        if(minLen==INT_MAX) return 0;
        return minLen;
    }
};
