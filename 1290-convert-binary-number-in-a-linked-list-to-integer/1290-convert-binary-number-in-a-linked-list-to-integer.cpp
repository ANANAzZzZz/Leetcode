/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// 1 1 1 0 1
// 0 0 1 1 1
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        int length = -1;

        for (ListNode* curr = head; curr; curr = curr->next) {
            length++;
        }

        while (head) {
            if (head->val) {
                ans += pow(2, length);
            }
            length--;
            head = head->next;
        }
        return ans;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)