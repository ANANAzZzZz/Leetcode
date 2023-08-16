class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> set;

        for (auto l : sentence) {
            set.insert(l);
        }

        return set.size() >= 26;
    }
};

// Time complexity - O(n)
// Space complexity - O(m), m - alphabet power