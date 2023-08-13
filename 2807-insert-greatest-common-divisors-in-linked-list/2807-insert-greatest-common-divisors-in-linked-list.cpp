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

class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while(curr->next) {
            ListNode* ins = new ListNode(gcd(curr->val, curr->next->val), curr->next);
            curr->next = ins;
            curr = ins->next;
        }

        return head;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)