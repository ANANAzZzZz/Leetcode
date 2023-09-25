class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;

        for (auto& ch : s) {
            m1[ch]++;
        }
        for (auto& ch : t) {
            m2[ch]++;
        }

        return m1 == m2;
    }
};

// Time complexity - O(n)
// Space complexity - O(n)