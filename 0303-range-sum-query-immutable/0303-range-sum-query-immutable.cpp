class NumArray {
public:
    vector<int> prefix;

    NumArray(vector<int>& nums) {
        prefix = {nums[0]};
        
        // Build prefix time && space - O(n)
        for (int i = 1; i < nums.size(); i++) {
            prefix.push_back(nums[i] + prefix.back()); 
        }
    }
    
    // Call sumRange time - O(1) 
    int sumRange(int left, int right) {
        if (left == 0) {
            return prefix[right];
        }

        return prefix[right] - prefix[left - 1];
    }
};

// Time complexity - O(n)
// Space complexity - (n)

// sum of range of  range l;r:
// prefix[r] - prefix[l - 1]

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */