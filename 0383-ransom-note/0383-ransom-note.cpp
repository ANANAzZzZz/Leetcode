class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> letters;
        
        for (char& l: magazine) {
            letters[l]++;
        }

        for (char& l: ransomNote) {
            if (letters[l] == 0) {
                return false;
            }
            letters[l]--;
        }

        return true;
    }
};

// Time complexity - O(n + m), where n - length of ransomNote, m - length of magazine
// Space complexity - O(m)