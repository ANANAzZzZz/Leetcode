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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;

        if (!head || !head->next) {
            return nullptr;
        }

        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        if (!fast) {
            head = head->next;
            return head;
        }

        for (; fast->next; fast = fast->next) {
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return head;
    }
};

// Time complexity - O(n)
// Space complexity - O(1)