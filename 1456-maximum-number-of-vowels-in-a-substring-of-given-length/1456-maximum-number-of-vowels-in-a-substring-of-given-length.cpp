class Solution {
public:
    int maxVowels(string s, int k) {
        int ans = 0;
        int curr = 0;

        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) {
                curr++;
            }
        }

        ans = curr;

        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i - k])) {
                curr--;
            }
            if (isVowel(s[i])) {
                curr++;
            }
            ans = max(curr, ans);
        }
        return ans;
    }

    bool isVowel(char letter) {
        return letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u';
    }
};

// Time complexity - O(n)
// Space complexity - O(1)