class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int kEl;

    KthLargest(int k, vector<int>& nums) {
        int n = nums.size();
        kEl = k;

        sort(nums.begin(), nums.end(), greater<int>());

        for (int i = 0; i < n; i++) {
            add(nums[i]);

            if (i == k - 1) {
                break;
            } 
        }
    }
    
    int add(int val) {
        int initialSize = pq.size();

        if (pq.size() < kEl) {
            pq.push(val);
        }

        if (pq.top() < val  && initialSize == kEl) {
            pq.pop();
            pq.push(val);
        }

        return pq.top();
    }
};

// Time complexity - O(nlogn)
// Space complexity - O(n)

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */