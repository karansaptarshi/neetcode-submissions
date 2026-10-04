class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    
        // 1. Sort the vector in ascending order using iterators
        std::sort(nums.begin(), nums.end());
        
        // 2. The kth largest element is at index (size - k)
        return nums[nums.size() - k];
    }
};
