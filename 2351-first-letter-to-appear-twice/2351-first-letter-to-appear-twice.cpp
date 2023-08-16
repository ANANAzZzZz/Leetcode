class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> set;

        for (auto letter : s) {
            if (set.find(letter) != set.end()) {
                return letter;
            }
            set.emplace(letter);
        }
        return char();
    }
};

// Time complexity - O(n)
// Space complexity - O(n)