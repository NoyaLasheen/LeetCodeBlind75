class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int minProd = nums[0];
        int maxProd = nums[0];
        int result = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
        
            if (nums[i] < 0) 
                swap(minProd, maxProd);
            
            minProd = min(nums[i], minProd * nums[i]);
            maxProd = max(nums[i], maxProd * nums[i]);
            result = max(result, maxProd);
        }
        return result;
    }
};