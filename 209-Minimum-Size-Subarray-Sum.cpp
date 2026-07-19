class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int low=0,high=0,sum=0,result=INT_MAX;
        while(high<n){
            sum=sum+nums[high];
        
        while(sum>=target){
            int length= high-low+1;
            result=min(result,length);
            sum=sum-nums[low];
            low++;
        }
        high++;
    }
  return (result == INT_MAX) ? 0 : result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna