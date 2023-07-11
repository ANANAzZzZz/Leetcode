class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> maxHeap;

        for (int num : nums) {
            maxHeap.push(num);
        }

        int fMultiplier = maxHeap.top() - 1;
        maxHeap.pop();
        int sMultiplier = maxHeap.top() - 1;

        return fMultiplier * sMultiplier;
    }
};

// Time complexity - O(nlog(n))
// Spcae complexity - O(n)