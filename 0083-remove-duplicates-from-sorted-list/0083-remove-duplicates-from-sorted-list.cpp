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
    ListNode* deleteDuplicates(ListNode* head) {
        for (ListNode* curr = head; curr != nullptr; curr = curr->next) {
            while (curr->next != nullptr && curr->val == curr->next->val) {
                ListNode* toDelete = curr->next;
                curr->next = curr->next->next;

                delete(toDelete);
            }
        }
        return head;
    }
};

// Time complexity - O(n^2)
// Space complexity - O(n)